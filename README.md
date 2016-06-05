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

First, compile it. This program requires GNU readline:

`make [install | debug]`

Then run it:

`[bin/]to-colemak`

When you type some text and press enter, you will see your input converted to
colemak:

```
asdf
arst
asdfghjkl;
arstdhneio
__count__
__count__	->	__cylkg__	41 steps
j;w [K[K[K[Kj;w wk ask c;ijfk[K[K[K[K[K[K[K[K[K[Kask c;ijfljt fhk dfkrd
j;w wk ask c;ijfljt fhk dfkrd	->	now we are counting the steps	41 steps
klfhks 13 ;s 41
klfhks 13 ;s 41	->	either 13 or 41	41 steps
dr[K[Kdfkrd
dfkrd	->	steps	13 steps
lf dkkmd f; c;sskdr;jg wlfh ukjthf
lf dkkmd f; c;sskdr;jg wlfh ukjthf	->	it seems to correspond with lenght	41 steps
*ukjth[Kfh
*ukjtfh	->	*length	41 steps
```
