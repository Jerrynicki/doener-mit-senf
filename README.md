# doener-mit-senf

# Das universelle Modul

Das Ziel dieses Repositories ist es, das Modul "Döner" in jeder möglichen Programmiersprache zu schreiben.

Folgende Kriterien für das Döner-Modul müssen erfüllt sein:

- Der Name des Moduls ist "doener".

- Es gibt eine Methode/Funktion: "mit", die einen String entgegennimmt, und wenn dieser String "senf" entspricht, wird "döner mit senf" in der Konsole ausgegeben.

# Anwendung der Module

## C#

```C#
using System;
using doener;
public static class doenertest {
	static void Main() {
		doener.Doener.mit("senf");
	}
}
```

## JavaScript

```JS
var doener = require("./doener.js");
doener.mit("senf");
```

## Python

```Python
import doener
doener.mit("senf")
```

## Ruby

```Ruby
require "./doener.rb"
Doener.mit("senf")
```

Alternativ kann die Anwendung auch in den jeweiligen Ordnern und den darin befindlichen Skripten nachgesehen werden.