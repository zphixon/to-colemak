#to-colemak

I picked up the colemak keyboard layout a few months ago and I've been having a
lot of fun with it so far. When I was using the
[qwerty->colemak translator](http://colemak.com/Converter) I was getting a bit
frustrated trying to input what it output, so I made my own tool to convert
from qwerty to colemak. I noticed eventually that I would always come back to
what I started with, so I added a way to count how many steps it takes to
get back to your input.

What I found was interesting: Input always loops back in either 0, 13, or 41
steps. Personally I can't comment on the math side of this, but it's a pretty
neat outcome that I didn't expect.

##how to use

First, compile it. This program does not have any external dependencies:

`make [install | debug]`

Then run it:

`[bin/]to-colemak [--count|-c]`

When you type some text and press enter, you will see your input converted to
colemak:

```
asdf
arst
fhld ld a fkdf.
this is a test.
Hkuu;, w;sug!
Hello, world!
H;w ask o;i f;gao?
How are you today?
```

With `-c/--count`

```
asdf
asdf    ->      arst    13 steps
fhld ld a fkdf.
fhld ld a fkdf. ->      this is a test. 41 steps
Hkuu;, w;sug!
Hkuu;, w;sug!   ->      Hello, world!   41 steps
H;w ask o;i g;ljt?
H;w ask o;i g;ljt?      ->      How are you doing?      41 steps
```

##license

This program is licensed under the MIT license. Additionally, linenoise is
licensed under its own license that I can't be bothered to look up.

