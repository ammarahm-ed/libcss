/*
 * This file is part of LibCSS.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2008 John-Mark Bell <jmb@netsurf-browser.org>
 */

#include "parse/propstrings.h"

/* Must be synchronised with enum in propstrings.h */
const stringmap_entry stringmap[LAST_KNOWN] = {
	{ "*", SLEN("*") },

	{ "charset", SLEN("charset") },
	{ "import", SLEN("import") },
	{ "media", SLEN("media") },
	{ "page", SLEN("page") },

	{ "aural", SLEN("aural") },
	{ "braille", SLEN("braille") },
	{ "embossed", SLEN("embossed") },
	{ "handheld", SLEN("handheld") },
	{ "print", SLEN("print") },
	{ "projection", SLEN("projection") },
	{ "screen", SLEN("screen") },
	{ "speech", SLEN("speech") },
	{ "tty", SLEN("tty") },
	{ "tv", SLEN("tv") },
	{ "all", SLEN("all") },

	{ "first-child", SLEN("first-child") },
	{ "link", SLEN("link") },
	{ "visited", SLEN("visited") },
	{ "hover", SLEN("hover") },
	{ "active", SLEN("active") },
	{ "focus", SLEN("focus") },
	{ "lang", SLEN("lang") },
	{ "first", SLEN("first") },

	{ "first-line", SLEN("first-line") },
	{ "first-letter", SLEN("first-letter") },
	{ "before", SLEN("before") },
	{ "after", SLEN("after") },

	{ "azimuth", SLEN("azimuth") },
	{ "background", SLEN("background") },
	{ "background-attachment", SLEN("background-attachment") },
	{ "background-color", SLEN("background-color") },
	{ "background-image", SLEN("background-image") },
	{ "background-position", SLEN("background-position") },
	{ "background-repeat", SLEN("background-repeat") },
	{ "border", SLEN("border") },
	{ "border-bottom", SLEN("border-bottom") },
	{ "border-bottom-color", SLEN("border-bottom-color") },
	{ "border-bottom-style", SLEN("border-bottom-style") },
	{ "border-bottom-width", SLEN("border-bottom-width") },
	{ "border-collapse", SLEN("border-collapse") },
	{ "border-color", SLEN("border-color") },
	{ "border-left", SLEN("border-left") },
	{ "border-left-color", SLEN("border-left-color") },
	{ "border-left-style", SLEN("border-left-style") },
	{ "border-left-width", SLEN("border-left-width") },
	{ "border-right", SLEN("border-right") },
	{ "border-right-color", SLEN("border-right-color") },
	{ "border-right-style", SLEN("border-right-style") },
	{ "border-right-width", SLEN("border-right-width") },
	{ "border-spacing", SLEN("border-spacing") },
	{ "border-style", SLEN("border-style") },
	{ "border-top", SLEN("border-top") },
	{ "border-top-color", SLEN("border-top-color") },
	{ "border-top-style", SLEN("border-top-style") },
	{ "border-top-width", SLEN("border-top-width") },
	{ "border-width", SLEN("border-width") },
	{ "bottom", SLEN("bottom") },
	{ "caption-side", SLEN("caption-side") },
	{ "clear", SLEN("clear") },
	{ "clip", SLEN("clip") },
	{ "color", SLEN("color") },
	{ "content", SLEN("content") },
	{ "counter-increment", SLEN("counter-increment") },
	{ "counter-reset", SLEN("counter-reset") },
	{ "cue", SLEN("cue") },
	{ "cue-after", SLEN("cue-after") },
	{ "cue-before", SLEN("cue-before") },
	{ "cursor", SLEN("cursor") },
	{ "direction", SLEN("direction") },
	{ "display", SLEN("display") },
	{ "elevation", SLEN("elevation") },
	{ "empty-cells", SLEN("empty-cells") },
	{ "float", SLEN("float") },
	{ "font", SLEN("font") },
	{ "font-family", SLEN("font-family") },
	{ "font-size", SLEN("font-size") },
	{ "font-style", SLEN("font-style") },
	{ "font-variant", SLEN("font-variant") },
	{ "font-weight", SLEN("font-weight") },
	{ "height", SLEN("height") },
	{ "left", SLEN("left") },
	{ "letter-spacing", SLEN("letter-spacing") },
	{ "line-height", SLEN("line-height") },
	{ "list-style", SLEN("list-style") },
	{ "list-style-image", SLEN("list-style-image") },
	{ "list-style-position", SLEN("list-style-position") },
	{ "list-style-type", SLEN("list-style-type") },
	{ "margin", SLEN("margin") },
	{ "margin-bottom", SLEN("margin-bottom") },
	{ "margin-left", SLEN("margin-left") },
	{ "margin-right", SLEN("margin-right") },
	{ "margin-top", SLEN("margin-top") },
	{ "max-height", SLEN("max-height") },
	{ "max-width", SLEN("max-width") },
	{ "min-height", SLEN("min-height") },
	{ "min-width", SLEN("min-width") },
	{ "opacity", SLEN("opacity") },
	{ "orphans", SLEN("orphans") },
	{ "outline", SLEN("outline") },
	{ "outline-color", SLEN("outline-color") },
	{ "outline-style", SLEN("outline-style") },
	{ "outline-width", SLEN("outline-width") },
	{ "overflow", SLEN("overflow") },
	{ "padding", SLEN("padding") },
	{ "padding-bottom", SLEN("padding-bottom") },
	{ "padding-left", SLEN("padding-left") },
	{ "padding-right", SLEN("padding-right") },
	{ "padding-top", SLEN("padding-top") },
	{ "page-break-after", SLEN("page-break-after") },
	{ "page-break-before", SLEN("page-break-before") },
	{ "page-break-inside", SLEN("page-break-inside") },
	{ "pause", SLEN("pause") },
	{ "pause-after", SLEN("pause-after") },
	{ "pause-before", SLEN("pause-before") },
	{ "pitch-range", SLEN("pitch-range") },
	{ "pitch", SLEN("pitch") },
	{ "play-during", SLEN("play-during") },
	{ "position", SLEN("position") },
	{ "quotes", SLEN("quotes") },
	{ "richness", SLEN("richness") },
	{ "right", SLEN("right") },
	{ "speak-header", SLEN("speak-header") },
	{ "speak-numeral", SLEN("speak-numeral") },
	{ "speak-punctuation", SLEN("speak-punctuation") },
	{ "speak", SLEN("speak") },
	{ "speech-rate", SLEN("speech-rate") },
	{ "stress", SLEN("stress") },
	{ "table-layout", SLEN("table-layout") },
	{ "text-align", SLEN("text-align") },
	{ "text-decoration", SLEN("text-decoration") },
	{ "text-indent", SLEN("text-indent") },
	{ "text-transform", SLEN("text-transform") },
	{ "top", SLEN("top") },
	{ "unicode-bidi", SLEN("unicode-bidi") },
	{ "vertical-align", SLEN("vertical-align") },
	{ "visibility", SLEN("visibility") },
	{ "voice-family", SLEN("voice-family") },
	{ "volume", SLEN("volume") },
	{ "white-space", SLEN("white-space") },
	{ "widows", SLEN("widows") },
	{ "width", SLEN("width") },
	{ "word-spacing", SLEN("word-spacing") },
	{ "z-index", SLEN("z-index") },

	{ "inherit", SLEN("inherit") },
	{ "important", SLEN("important") },
	{ "none", SLEN("none") },
	{ "both", SLEN("both") },
	{ "fixed", SLEN("fixed") },
	{ "scroll", SLEN("scroll") },
	{ "transparent", SLEN("transparent") },
	{ "no-repeat", SLEN("no-repeat") },
	{ "repeat-x", SLEN("repeat-x") },
	{ "repeat-y", SLEN("repeat-y") },
	{ "repeat", SLEN("repeat") },
	{ "hidden", SLEN("hidden") },
	{ "dotted", SLEN("dotted") },
	{ "dashed", SLEN("dashed") },
	{ "solid", SLEN("solid") },
	{ "double", SLEN("double") },
	{ "groove", SLEN("groove") },
	{ "ridge", SLEN("ridge") },
	{ "inset", SLEN("inset") },
	{ "outset", SLEN("outset") },
	{ "thin", SLEN("thin") },
	{ "medium", SLEN("medium") },
	{ "thick", SLEN("thick") },
	{ "collapse", SLEN("collapse") },
	{ "separate", SLEN("separate") },
	{ "auto", SLEN("auto") },
	{ "ltr", SLEN("ltr") },
	{ "rtl", SLEN("rtl") },
	{ "inline", SLEN("inline") },
	{ "block", SLEN("block") },
	{ "list-item", SLEN("list-item") },
	{ "run-in", SLEN("run-in") },
	{ "inline-block", SLEN("inline-block") },
	{ "table", SLEN("table") },
	{ "inline-table", SLEN("inline-table") },
	{ "table-row-group", SLEN("table-row-group") },
	{ "table-header-group", SLEN("table-header-group") },
	{ "table-footer-group", SLEN("table-footer-group") },
	{ "table-row", SLEN("table-row") },
	{ "table-column-group", SLEN("table-column-group") },
	{ "table-column", SLEN("table-column") },
	{ "table-cell", SLEN("table-cell") },
	{ "table-caption", SLEN("table-caption") },
	{ "below", SLEN("below") },
	{ "level", SLEN("level") },
	{ "above", SLEN("above") },
	{ "higher", SLEN("higher") },
	{ "lower", SLEN("lower") },
	{ "show", SLEN("show") },
	{ "hide", SLEN("hide") },
	{ "xx-small", SLEN("xx-small") },
	{ "x-small", SLEN("x-small") },
	{ "small", SLEN("small") },
	{ "large", SLEN("large") },
	{ "x-large", SLEN("x-large") },
	{ "xx-large", SLEN("xx-large") },
	{ "larger", SLEN("larger") },
	{ "smaller", SLEN("smaller") },
	{ "normal", SLEN("normal") },
	{ "italic", SLEN("italic") },
	{ "oblique", SLEN("oblique") },
	{ "small-caps", SLEN("small-caps") },
	{ "bold", SLEN("bold") },
	{ "bolder", SLEN("bolder") },
	{ "lighter", SLEN("lighter") },
	{ "inside", SLEN("inside") },
	{ "outside", SLEN("outside") },
	{ "disc", SLEN("disc") },
	{ "circle", SLEN("circle") },
	{ "square", SLEN("square") },
	{ "decimal", SLEN("decimal") },
	{ "decimal-leading-zero", SLEN("decimal-leading-zero") },
	{ "lower-roman", SLEN("lower-roman") },
	{ "upper-roman", SLEN("upper-roman") },
	{ "lower-greek", SLEN("lower-greek") },
	{ "lower-latin", SLEN("lower-latin") },
	{ "upper-latin", SLEN("upper-latin") },
	{ "armenian", SLEN("armenian") },
	{ "georgian", SLEN("georgian") },
	{ "lower-alpha", SLEN("lower-alpha") },
	{ "upper-alpha", SLEN("upper-alpha") },
	{ "invert", SLEN("invert") },
	{ "visible", SLEN("visible") },
	{ "always", SLEN("always") },
	{ "avoid", SLEN("avoid") },
	{ "x-low", SLEN("x-low") },
	{ "low", SLEN("low") },
	{ "high", SLEN("high") },
	{ "x-high", SLEN("x-high") },
	{ "static", SLEN("static") },
	{ "relative", SLEN("relative") },
	{ "absolute", SLEN("absolute") },
	{ "once", SLEN("once") },
	{ "digits", SLEN("digits") },
	{ "continuous", SLEN("continuous") },
	{ "code", SLEN("code") },
	{ "spell-out", SLEN("spell-out") },
	{ "x-slow", SLEN("x-slow") },
	{ "slow", SLEN("slow") },
	{ "fast", SLEN("fast") },
	{ "x-fast", SLEN("x-fast") },
	{ "faster", SLEN("faster") },
	{ "slower", SLEN("slower") },
	{ "center", SLEN("center") },
	{ "justify", SLEN("justify") },
	{ "capitalize", SLEN("capitalize") },
	{ "uppercase", SLEN("uppercase") },
	{ "lowercase", SLEN("lowercase") },
	{ "embed", SLEN("embed") },
	{ "bidi-override", SLEN("bidi-override") },
	{ "baseline", SLEN("baseline") },
	{ "sub", SLEN("sub") },
	{ "super", SLEN("super") },
	{ "text-top", SLEN("text-top") },
	{ "middle", SLEN("middle") },
	{ "text-bottom", SLEN("text-bottom") },
	{ "silent", SLEN("silent") },
	{ "x-soft", SLEN("x-soft") },
	{ "soft", SLEN("soft") },
	{ "loud", SLEN("loud") },
	{ "x-loud", SLEN("x-loud") },
	{ "pre", SLEN("pre") },
	{ "nowrap", SLEN("nowrap") },
	{ "pre-wrap", SLEN("pre-wrap") },
	{ "pre-line", SLEN("pre-line") },
	{ "leftwards", SLEN("leftwards") },
	{ "rightwards", SLEN("rightwards") },
	{ "left-side", SLEN("left-side") },
	{ "far-left", SLEN("far-left") },
	{ "center-left", SLEN("center-left") },
	{ "center-right", SLEN("center-right") },
	{ "far-right", SLEN("far-right") },
	{ "right-side", SLEN("right-side") },
	{ "behind", SLEN("behind") },
	{ "rect", SLEN("rect") },
	{ "open-quote", SLEN("open-quote") },
	{ "close-quote", SLEN("close-quote") },
	{ "no-open-quote", SLEN("no-open-quote") },
	{ "no-close-quote", SLEN("no-close-quote") },
	{ "attr", SLEN("attr") },
	{ "counter", SLEN("counter") },
	{ "counters", SLEN("counters") },
	{ "crosshair", SLEN("crosshair") },
	{ "default", SLEN("default") },
	{ "pointer", SLEN("pointer") },
	{ "move", SLEN("move") },
	{ "e-resize", SLEN("e-resize") },
	{ "ne-resize", SLEN("ne-resize") },
	{ "nw-resize", SLEN("nw-resize") },
	{ "n-resize", SLEN("n-resize") },
	{ "se-resize", SLEN("se-resize") },
	{ "sw-resize", SLEN("sw-resize") },
	{ "s-resize", SLEN("s-resize") },
	{ "w-resize", SLEN("w-resize") },
	{ "text", SLEN("text") },
	{ "wait", SLEN("wait") },
	{ "help", SLEN("help") },
	{ "progress", SLEN("progress") },
	{ "serif", SLEN("serif") },
	{ "sans-serif", SLEN("sans-serif") },
	{ "cursive", SLEN("cursive") },
	{ "fantasy", SLEN("fantasy") },
	{ "monospace", SLEN("monospace") },
	{ "male", SLEN("male") },
	{ "female", SLEN("female") },
	{ "child", SLEN("child") },
	{ "mix", SLEN("mix") },
	{ "underline", SLEN("underline") },
	{ "overline", SLEN("overline") },
	{ "line-through", SLEN("line-through") },
	{ "blink", SLEN("blink") },
	{ "rgb", SLEN("rgb") },
	{ "rgba", SLEN("rgba") },
	{ "hsl", SLEN("hsl") },
	{ "hsla", SLEN("hsla") },
	{ "-libcss-left", SLEN("-libcss-left") },
	{ "-libcss-center", SLEN("-libcss-center") },
	{ "-libcss-right", SLEN("-libcss-right") },
	{ "currentColor", SLEN("currentColor") },

	{ "aliceblue", SLEN("aliceblue") },
	{ "antiquewhite", SLEN("antiquewhite") },
	{ "aqua", SLEN("aqua") },
	{ "aquamarine", SLEN("aquamarine") },
	{ "azure", SLEN("azure") },
	{ "beige", SLEN("beige") },
	{ "bisque", SLEN("bisque") },
	{ "black", SLEN("black") },
	{ "blanchedalmond", SLEN("blanchedalmond") },
	{ "blue", SLEN("blue") },
	{ "blueviolet", SLEN("blueviolet") },
	{ "brown", SLEN("brown") },
	{ "burlywood", SLEN("burlywood") },
	{ "cadetblue", SLEN("cadetblue") },
	{ "chartreuse", SLEN("chartreuse") },
	{ "chocolate", SLEN("chocolate") },
	{ "coral", SLEN("coral") },
	{ "cornflowerblue", SLEN("cornflowerblue") },
	{ "cornsilk", SLEN("cornsilk") },
	{ "crimson", SLEN("crimson") },
	{ "cyan", SLEN("cyan") },
	{ "darkblue", SLEN("darkblue") },
	{ "darkcyan", SLEN("darkcyan") },
	{ "darkgoldenrod", SLEN("darkgoldenrod") },
	{ "darkgray", SLEN("darkgray") },
	{ "darkgreen", SLEN("darkgreen") },
	{ "darkgrey", SLEN("darkgrey") },
	{ "darkkhaki", SLEN("darkkhaki") },
	{ "darkmagenta", SLEN("darkmagenta") },
	{ "darkolivegreen", SLEN("darkolivegreen") },
	{ "darkorange", SLEN("darkorange") },
	{ "darkorchid", SLEN("darkorchid") },
	{ "darkred", SLEN("darkred") },
	{ "darksalmon", SLEN("darksalmon") },
	{ "darkseagreen", SLEN("darkseagreen") },
	{ "darkslateblue", SLEN("darkslateblue") },
	{ "darkslategray", SLEN("darkslategray") },
	{ "darkslategrey", SLEN("darkslategrey") },
	{ "darkturquoise", SLEN("darkturquoise") },
	{ "darkviolet", SLEN("darkviolet") },
	{ "deeppink", SLEN("deeppink") },
	{ "deepskyblue", SLEN("deepskyblue") },
	{ "dimgray", SLEN("dimgray") },
	{ "dimgrey", SLEN("dimgrey") },
	{ "dodgerblue", SLEN("dodgerblue") },
	{ "feldspar", SLEN("feldspar") },
	{ "firebrick", SLEN("firebrick") },
	{ "floralwhite", SLEN("floralwhite") },
	{ "forestgreen", SLEN("forestgreen") },
	{ "fuchsia", SLEN("fuchsia") },
	{ "gainsboro", SLEN("gainsboro") },
	{ "ghostwhite", SLEN("ghostwhite") },
	{ "gold", SLEN("gold") },
	{ "goldenrod", SLEN("goldenrod") },
	{ "gray", SLEN("gray") },
	{ "green", SLEN("green") },
	{ "greenyellow", SLEN("greenyellow") },
	{ "grey", SLEN("grey") },
	{ "honeydew", SLEN("honeydew") },
	{ "hotpink", SLEN("hotpink") },
	{ "indianred", SLEN("indianred") },
	{ "indigo", SLEN("indigo") },
	{ "ivory", SLEN("ivory") },
	{ "khaki", SLEN("khaki") },
	{ "lavender", SLEN("lavender") },
	{ "lavenderblush", SLEN("lavenderblush") },
	{ "lawngreen", SLEN("lawngreen") },
	{ "lemonchiffon", SLEN("lemonchiffon") },
	{ "lightblue", SLEN("lightblue") },
	{ "lightcoral", SLEN("lightcoral") },
	{ "lightcyan", SLEN("lightcyan") },
	{ "lightgoldenrodyellow", SLEN("lightgoldenrodyellow") },
	{ "lightgray", SLEN("lightgray") },
	{ "lightgreen", SLEN("lightgreen") },
	{ "lightgrey", SLEN("lightgrey") },
	{ "lightpink", SLEN("lightpink") },
	{ "lightsalmon", SLEN("lightsalmon") },
	{ "lightseagreen", SLEN("lightseagreen") },
	{ "lightskyblue", SLEN("lightskyblue") },
	{ "lightslateblue", SLEN("lightslateblue") },
	{ "lightslategray", SLEN("lightslategray") },
	{ "lightslategrey", SLEN("lightslategrey") },
	{ "lightsteelblue", SLEN("lightsteelblue") },
	{ "lightyellow", SLEN("lightyellow") },
	{ "lime", SLEN("lime") },
	{ "limegreen", SLEN("limegreen") },
	{ "linen", SLEN("linen") },
	{ "magenta", SLEN("magenta") },
	{ "maroon", SLEN("maroon") },
	{ "mediumaquamarine", SLEN("mediumaquamarine") },
	{ "mediumblue", SLEN("mediumblue") },
	{ "mediumorchid", SLEN("mediumorchid") },
	{ "mediumpurple", SLEN("mediumpurple") },
	{ "mediumseagreen", SLEN("mediumseagreen") },
	{ "mediumslateblue", SLEN("mediumslateblue") },
	{ "mediumspringgreen", SLEN("mediumspringgreen") },
	{ "mediumturquoise", SLEN("mediumturquoise") },
	{ "mediumvioletred", SLEN("mediumvioletred") },
	{ "midnightblue", SLEN("midnightblue") },
	{ "mintcream", SLEN("mintcream") },
	{ "mistyrose", SLEN("mistyrose") },
	{ "moccasin", SLEN("moccasin") },
	{ "navajowhite", SLEN("navajowhite") },
	{ "navy", SLEN("navy") },
	{ "oldlace", SLEN("oldlace") },
	{ "olive", SLEN("olive") },
	{ "olivedrab", SLEN("olivedrab") },
	{ "orange", SLEN("orange") },
	{ "orangered", SLEN("orangered") },
	{ "orchid", SLEN("orchid") },
	{ "palegoldenrod", SLEN("palegoldenrod") },
	{ "palegreen", SLEN("palegreen") },
	{ "paleturquoise", SLEN("paleturquoise") },
	{ "palevioletred", SLEN("palevioletred") },
	{ "papayawhip", SLEN("papayawhip") },
	{ "peachpuff", SLEN("peachpuff") },
	{ "peru", SLEN("peru") },
	{ "pink", SLEN("pink") },
	{ "plum", SLEN("plum") },
	{ "powderblue", SLEN("powderblue") },
	{ "purple", SLEN("purple") },
	{ "red", SLEN("red") },
	{ "rosybrown", SLEN("rosybrown") },
	{ "royalblue", SLEN("royalblue") },
	{ "saddlebrown", SLEN("saddlebrown") },
	{ "salmon", SLEN("salmon") },
	{ "sandybrown", SLEN("sandybrown") },
	{ "seagreen", SLEN("seagreen") },
	{ "seashell", SLEN("seashell") },
	{ "sienna", SLEN("sienna") },
	{ "silver", SLEN("silver") },
	{ "skyblue", SLEN("skyblue") },
	{ "slateblue", SLEN("slateblue") },
	{ "slategray", SLEN("slategray") },
	{ "slategrey", SLEN("slategrey") },
	{ "snow", SLEN("snow") },
	{ "springgreen", SLEN("springgreen") },
	{ "steelblue", SLEN("steelblue") },
	{ "tan", SLEN("tan") },
	{ "teal", SLEN("teal") },
	{ "thistle", SLEN("thistle") },
	{ "tomato", SLEN("tomato") },
	{ "turquoise", SLEN("turquoise") },
	{ "violet", SLEN("violet") },
	{ "violetred", SLEN("violetred") },
	{ "wheat", SLEN("wheat") },
	{ "white", SLEN("white") },
	{ "whitesmoke", SLEN("whitesmoke") },
	{ "yellow", SLEN("yellow") },
	{ "yellowgreen", SLEN("yellowgreen") }
};


