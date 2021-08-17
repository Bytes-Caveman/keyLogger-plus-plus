string getKey(int keyCode, bool capital) {
    string key ;
    if (keyCode == 8) { key = "Backspace"; }
    else if (keyCode == 13) { key = "Enter"; }
    else if (keyCode == 32) { key = "Space"; }
    else if (keyCode == VK_TAB)  { key = "Tab"; }
    else if (keyCode == VK_CONTROL) { key = "Control"; }
    else if (keyCode == VK_ESCAPE) { key = "Escape"; }
    else if (keyCode == VK_END) { key = "End"; }
    else if (keyCode == VK_HOME) { key = "Home"; }
    else if (keyCode == VK_LEFT) {key = "Arrows.Left"; }
    else if (keyCode == VK_UP) { key = "Arrows.Up"; }
    else if (keyCode == VK_RIGHT) { key = "Arrows.Right"; }
    else if (keyCode == VK_DOWN) { key = "Arrows.Down"; }
    else if (keyCode == 190 || keyCode == 46) { key = "Dot"; }
    else {
        key = char(keyCode);
    }

    if (capital) {
        return "Shifting." + key ;
    }
    return key;
}
