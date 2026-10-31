/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180167da1 */

undefined8 FUN_180167da1(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(char *)((longlong)param_1 + 0x23e) == '\x01') &&
     (*(short *)(param_1 + 0x1e) == *(short *)((longlong)param_1 + 0x7a))) {
    uVar2 = FUN_1800fed39("##ContextMenu",0,*param_1);
    cVar1 = FUN_18011b34f(uVar2,0x141);
    if (cVar1 != '\0') {
      return 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x23e) = 0;
  }
  return 0;
}

