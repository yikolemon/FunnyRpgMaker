/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010e3db */

void __fastcall FUN_1010e3db(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = DAT_1039d74c;
  *(int *)(DAT_1039d74c + 0x14cc) = param_1;
  if (param_1 != 0) {
    *(int *)(iVar2 + 0x27ac) = *(int *)(iVar2 + 0x14b0) + *(int *)(iVar2 + 0x14a8) * 0x70 + -0x1c;
    if (*(int *)(param_1 + 0x1ec) == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1ec) * 0x204 + *(int *)(iVar2 + 9000);
    }
    *(int *)(iVar2 + 0x2308) = iVar3;
    if ((*(byte *)(iVar2 + 0x34) & 0x10) != 0) {
      fVar4 = *(float *)(*(int *)(param_1 + 0x3c) + 0x18);
      if ((fVar4 == 0.0) && (!NAN(fVar4))) {
        fVar4 = *(float *)(iVar2 + 0x40);
      }
      *(float *)(iVar2 + 0x1234) = fVar4;
    }
    uVar1 = *(undefined1 *)(param_1 + 0xfe);
    *(undefined1 *)(param_1 + 0xfe) = 0;
    FUN_10111f43(0);
    *(undefined1 *)(param_1 + 0xfe) = uVar1;
    FUN_1011728b();
    return;
  }
  *(undefined4 *)(iVar2 + 0x27ac) = 0;
  *(undefined4 *)(iVar2 + 0x2308) = 0;
  return;
}

