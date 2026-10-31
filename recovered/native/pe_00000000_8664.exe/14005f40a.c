/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005f40a */

undefined8 FUN_14005f40a(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x60) >> 0xd & 0x7ffff;
  if ((*(ushort *)(param_1 + 0x76) == 0x62 & (byte)uVar4) == 1) {
    FUN_14005ddac(param_1);
    uVar2 = 8;
LAB_14005f477:
    *(undefined2 *)(param_1 + 0x78) = uVar2;
  }
  else {
    if ((*(ulonglong *)(param_1 + 0x60) & 0x80080) != 0) {
      iVar3 = *(ushort *)(param_1 + 0x76) - 0x30;
      if ((ushort)iVar3 < 10) {
        *(int *)(param_1 + 0x6c) = iVar3;
        FUN_14005ddac(param_1);
        if ((((*(byte *)(param_1 + 0x62) & 8) == 0) || (*(int *)(param_1 + 0x6c) != 0)) ||
           ((ushort)(*(short *)(param_1 + 0x76) - 0x30U) < 10)) goto LAB_14005f4bf;
        uVar2 = 0;
        goto LAB_14005f477;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
    cVar1 = FUN_14005e43a(param_1,CONCAT71((int7)(uVar4 >> 8),1));
    if (cVar1 == '\0') {
      if (((*(byte *)(param_1 + 0x62) & 1) != 0) &&
         (cVar1 = FUN_14005e55e(param_1,0), cVar1 != '\0')) {
        return 2;
      }
LAB_14005f4bf:
                    /* WARNING: Subroutine does not return */
      FUN_14005deae(param_1,2);
    }
  }
  return 1;
}

