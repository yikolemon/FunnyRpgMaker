/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180210e51 */

longlong FUN_180210e51(longlong param_1,char *param_2)

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
       (plVar1 = (longlong *)thunk_FUN_1801ca2fe(param_2,*(undefined8 *)(param_1 + 0x70)),
       plVar1 != (longlong *)0x0)) {
      return *plVar1 * 0x18 + *(longlong *)(param_1 + 0x58);
    }
  }
  return 0;
}

