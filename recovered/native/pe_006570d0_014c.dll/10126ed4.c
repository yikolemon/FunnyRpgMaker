/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126ed4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10126ed4(int param_1)

{
  int iVar1;
  char *pcVar2;
  float10 fVar3;
  uint in_XMM0_Da;
  float fVar4;
  
  iVar1 = DAT_1039d74c;
  if (param_1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar3 = (float10)FUN_100ea38a((float)(in_XMM0_Da & _DAT_1028b410) * DAT_102b71d4 +
                                  *(float *)(DAT_1039d74c + 0x14f4),0x3f333333);
    fVar4 = (float)fVar3;
  }
  *(float *)(iVar1 + 0x14f4) = fVar4;
  if (*(int *)(iVar1 + 0x14e0) != param_1) {
    if ((*(byte *)(iVar1 + 0x27b4) & 0x80) != 0) {
      if (param_1 == 0) {
        pcVar2 = "NULL";
      }
      else {
        pcVar2 = *(char **)(param_1 + 4);
      }
      FUN_100f99e6("[io] LockWheelingWindow() \"%s\"\n",pcVar2);
    }
    *(int *)(iVar1 + 0x14e0) = param_1;
    *(undefined4 *)(iVar1 + 0x14e8) = *(undefined4 *)(iVar1 + 0xe8);
    *(undefined4 *)(iVar1 + 0x14e4) = *(undefined4 *)(iVar1 + 0xe4);
    if (param_1 == 0) {
      *(undefined4 *)(iVar1 + 0x14ec) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x1500) = 0;
      *(undefined4 *)(iVar1 + 0x1504) = 0;
    }
  }
  return;
}

