# GLFW Common Commands

## 1.Initalization & Window Creation
```cpp
// Initialize GLFW
if (!glfwInit()) return -1;

// Window hints (set before creation)
glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);        // Allow window resizing
glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);         // Start hidden (show manually)
glfwWindowHint(GLFW_DECORATED, GLFW_FALSE);       // No title bar/border
glfwWindowHint(GLFW_FLOATING, GLFW_TRUE);         // Always on top
glfwWindowHint(GLFW_MAXIMIZED, GLFW_TRUE);        // Start maximized
glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE); // Transparent background

// OpenGL version (if needed)
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

// Create window
GLFWwindow* win = glfwCreateWindow(800, 600, "Title", nullptr, nullptr);

// Set current context (for OpenGL)
glfwMakeContextCurrent(win);

// Enable V-Sync (0 = off, 1 = on)
glfwSwapInterval(1);
```

## 2.Main Loop & Events
```cpp
// Main loop
while (!glfwWindowShouldClose(win)) {
    // Poll events (keyboard, mouse, etc.)
    glfwPollEvents();      // Non-blocking
    // glfwWaitEvents();   // Block until event occurs
    
    // Swap buffers (double buffering)
    glfwSwapBuffers(win);
}

// Terminate
glfwTerminate();
```

## 3.Window Operations
```cpp
// Get/Set window size
int w, h;
glfwGetWindowSize(win, &w, &h);
glfwSetWindowSize(win, 1024, 768);

// Get/Set position
int x, y;
glfwGetWindowPos(win, &x, &y);
glfwSetWindowPos(win, 100, 100);

// Get framebuffer size (for DPI scaling)
glfwGetFramebufferSize(win, &w, &h);

// Title
glfwSetWindowTitle(win, "New Title");

// Show/Hide
glfwShowWindow(win);
glfwHideWindow(win);

// Iconify (minimize) / Restore
glfwIconifyWindow(win);
glfwRestoreWindow(win);

// Maximize
glfwMaximizeWindow(win);

// Focus
glfwFocusWindow(win);

// Close
glfwSetWindowShouldClose(win, GLFW_TRUE);
```

## 4.Input Handling
```cpp
// Keyboard
if (glfwGetKey(win, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
    glfwSetWindowShouldClose(win, GLFW_TRUE);
}

// Mouse position
double mx, my;
glfwGetCursorPos(win, &mx, &my);

// Mouse button
if (glfwGetMouseButton(win, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS) {
    // Left click
}

// Cursor modes
glfwSetInputMode(win, GLFW_CURSOR, GLFW_CURSOR_DISABLED);   // Capture/lock
glfwSetInputMode(win, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);     // Hide cursor
glfwSetInputMode(win, GLFW_CURSOR, GLFW_CURSOR_NORMAL);     // Normal
```

## 5.Callbacks
```cpp
// Window resize
glfwSetFramebufferSizeCallback(win, [](GLFWwindow* w, int width, int height) {
    glViewport(0, 0, width, height);
});

// Keyboard
glfwSetKeyCallback(win, [](GLFWwindow* w, int key, int scancode, int action, int mods) {
    if (action == GLFW_PRESS) { /* key down */ }
    if (action == GLFW_RELEASE) { /* key up */ }
});

// Mouse movement
glfwSetCursorPosCallback(win, [](GLFWwindow* w, double x, double y) {
    // Mouse moved
});

// Mouse buttons
glfwSetMouseButtonCallback(win, [](GLFWwindow* w, int button, int action, int mods) {
    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) {
        // Left click
    }
});

// Scroll wheel
glfwSetScrollCallback(win, [](GLFWwindow* w, double xoffset, double yoffset) {
    // yoffset: positive = scroll up, negative = scroll down
});

// Window close
glfwSetWindowCloseCallback(win, [](GLFWwindow* w) {
    // Cleanup before closing
});
```

## 6.Timing
```cpp
// Get time (seconds since glfwInit)
double time = glfwGetTime();

// Frame rate limiting
while (glfwGetTime() < targetTime) {
    // Busy wait or sleep
}

// Get timer frequency (platform dependent)
// Use glfwGetTime() for portable timing
```

## 7.Monitor & Mode
```cpp
// Get primary monitor
GLFWmonitor* monitor = glfwGetPrimaryMonitor();

// Get all monitors
int count;
GLFWmonitor** monitors = glfwGetMonitors(&count);

// Get monitor resolution
const GLFWvidmode* mode = glfwGetVideoMode(monitor);
int width = mode->width;
int height = mode->height;

// Fullscreen (pass monitor instead of nullptr)
GLFWwindow* fullscreenWin = glfwCreateWindow(800, 600, "Fullscreen", monitor, nullptr);
```

## 8.Compilation (Ubuntu)
```sh
# Basic
g++ main.cpp -o app -lglfw -lwayland-client

# With OpenGL
g++ main.cpp -o app -lglfw -lGL

# With GLAD/GLEW
g++ main.cpp -o app -lglfw -lGL -lGLEW
```

## 9.Environment Variables (Wayland)
```sh
# Force Wayland backend
export GLFW_PLATFORM=wayland

# Force X11 backend
export GLFW_PLATFORM=x11

# Run with specific backend
GLFW_PLATFORM=wayland ./app
```