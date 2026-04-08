# Variable Name


**Valid and Invalid Variable names**
[ Page 38, 3.1.1 ]
`int poodle;`
> valid
`int Poodle;`
> valid and distinct from people
`int POODLE;`
> valid even more distinct
`Int terrier;`
> invalid -- has to be int, not Int
`int my_stars3;`
> valid
`int _Mystars3;`
> valid but reserved -- starts with underscore
`int 4ever;`
> invalid -- starts with a digit
`int double;`
> invalid -- double is a c++ keyword
`int begin;`
> valid -- begin is a Pascal keyword
`int __fools;`
> valid but reserved -- starts with two underscores
`int the_very_best_variable_i_can_be_version_112;`
> valid
`int honky-tonk;`
> invalid -- no hyphens allowed

**Types of Variable(Integers)**
[ Page 39, 3.1.3 ]
`short variable;`
> at least 16 bit (-32768 to 32767)
`int variable;`
> at least same with short
`long variable;`
> at least 32 bit, and at least same with int (-2147483648 to 2147483647)
`long long variable;`
> at least 64 bit, and at least same with long (-9223372036854775808 to 9223372036854775807)
`double variable;`
> to use a double-precision floating-point numbers
`char variable;`
> to put characters in variable
`wcha_t variable;`
> to use a wide character set
`char16_t variable;`
> to use basic character in 16-bit form
`char32_t variable;`
> to use universal character name in 32-bit form
`bool variable;`
> to use boolean value
`const <any> variable;`
> to lock the variable ~This is actually a constant~
