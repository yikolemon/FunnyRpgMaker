/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001eb52 */

undefined4 __fastcall FUN_1001eb52(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  
  if ((*(char *)(param_1 + 0x4d) == 'b' & (byte)(*(uint *)(param_1 + 0x38) >> 0xd)) == 1) {
    FUN_1001d8ea();
    uVar1 = 8;
LAB_1001eba9:
    *(undefined1 *)(param_1 + 0x4e) = uVar1;
  }
  else {
    if ((*(uint *)(param_1 + 0x38) & 0x80080) != 0) {
      bVar2 = *(char *)(param_1 + 0x4d) - 0x30;
      if (bVar2 < 10) {
        *(uint *)(param_1 + 0x44) = (uint)bVar2;
        FUN_1001d8ea();
        if ((((*(byte *)(param_1 + 0x3a) & 8) == 0) || (*(int *)(param_1 + 0x44) != 0)) ||
           ((byte)(*(char *)(param_1 + 0x4d) - 0x30U) < 10)) goto LAB_1001ebe1;
        uVar1 = 0;
        goto LAB_1001eba9;
      }
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    }
    cVar3 = FUN_1001dec4(1);
    if (cVar3 == '\0') {
      if (((*(byte *)(param_1 + 0x3a) & 1) != 0) && (cVar3 = FUN_1001dfbc(0), cVar3 != '\0')) {
        return 2;
      }
LAB_1001ebe1:
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(2);
    }
  }
  return 1;
}

