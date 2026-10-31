/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101629f2 */

undefined4 FUN_101629f2(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(char *)((int)param_1 + 0x1f2) == '\x01') &&
     (*(short *)(param_1 + 0x13) == *(short *)((int)param_1 + 0x4e))) {
    uVar2 = FUN_100fa6c3("##ContextMenu",0,*param_1);
    cVar1 = FUN_1011653c(uVar2,0x141);
    if (cVar1 != '\0') {
      return 1;
    }
    *(undefined1 *)((int)param_1 + 0x1f2) = 0;
  }
  return 0;
}

