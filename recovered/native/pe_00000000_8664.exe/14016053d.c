/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016053d */

longlong FUN_14016053d(longlong param_1,char *param_2)

{
  longlong *plVar1;
  
  if (param_1 != 0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      return 0;
    }
    if ((*param_2 != '\0') &&
       (plVar1 = (longlong *)thunk_FUN_1401292d2(param_2,*(undefined8 *)(param_1 + 0x70)),
       plVar1 != (longlong *)0x0)) {
      return *plVar1 * 0x18 + *(longlong *)(param_1 + 0x58);
    }
  }
  return 0;
}

