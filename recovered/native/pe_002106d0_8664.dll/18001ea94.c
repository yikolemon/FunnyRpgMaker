/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001ea94 */

undefined8 FUN_18001ea94(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x60) >> 0xd & 0x7ffff;
  if ((*(char *)(param_1 + 0x75) == 'b' & (byte)uVar4) == 1) {
    FUN_18001d674(param_1);
    uVar2 = 8;
LAB_18001eaf6:
    *(undefined1 *)(param_1 + 0x76) = uVar2;
  }
  else {
    if ((*(ulonglong *)(param_1 + 0x60) & 0x80080) != 0) {
      bVar1 = *(char *)(param_1 + 0x75) - 0x30;
      if (bVar1 < 10) {
        *(uint *)(param_1 + 0x6c) = (uint)bVar1;
        FUN_18001d674(param_1);
        if ((((*(byte *)(param_1 + 0x62) & 8) == 0) || (*(int *)(param_1 + 0x6c) != 0)) ||
           ((byte)(*(char *)(param_1 + 0x75) - 0x30U) < 10)) goto LAB_18001eb3d;
        uVar2 = 0;
        goto LAB_18001eaf6;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
    cVar3 = FUN_18001dcee(param_1,CONCAT71((int7)(uVar4 >> 8),1));
    if (cVar3 == '\0') {
      if (((*(byte *)(param_1 + 0x62) & 1) != 0) &&
         (cVar3 = FUN_18001de0c(param_1,0), cVar3 != '\0')) {
        return 2;
      }
LAB_18001eb3d:
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,2);
    }
  }
  return 1;
}

