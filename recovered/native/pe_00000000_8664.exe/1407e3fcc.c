/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e3fcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e3fcc(ulonglong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined4 *puVar4;
  float fVar5;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  ulonglong auStack_30 [3];
  
  fVar5 = (float)((ulonglong)unaff_RBX >> 0x20);
  param_1 = param_1 & 0xffffffff;
  if (_DAT_150a9b0ca <= fVar5 && 0xffffff < unaff_retaddr) {
    if ((int)unaff_retaddr_00 < 1) {
      puVar4 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x14);
      puVar4[4] = 0;
      puVar4[2] = 0;
      puVar4[1] = fVar5;
      *puVar4 = (int)unaff_RBX;
      puVar4[3] = 0x30;
      *(undefined8 *)(puVar4 + -2) = 0x1407e408b;
      FUN_1407e157c(param_1);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x38);
      *(ulonglong *)(param_1 + 0x38) = uVar2;
    }
    else {
      auStack_30[2] = 0x200;
      auStack_30[1] = 3;
      auStack_30[0] = (ulonglong)unaff_retaddr_00;
      iVar1 = FUN_14077dc6a();
      uVar3 = (ulonglong)((int)auStack_30 + 0xc);
      fVar5 = (_DAT_150a9ca75 + (float)iVar1) * _DAT_150a9d59d;
      puVar4 = (undefined4 *)(uVar3 - 0x14);
      *(int *)(uVar3 - 4) = iVar1;
      *(undefined4 *)(uVar3 - 0x10) = *(undefined4 *)(uVar3 + 0x14);
      *(int *)(uVar3 - 0x14) = (int)unaff_RBX;
      *(float *)(uVar3 - 8) = fVar5 / (float)iVar1;
      *(undefined4 *)(uVar3 - 0xc) = 0;
      *(undefined8 *)(uVar3 - 0x1c) = 0x1407e4061;
      FUN_1407e1bc2(param_1);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x38);
    }
    *(ulonglong *)((longlong)puVar4 + -8) = (ulonglong)unaff_retaddr;
    *(ulonglong *)((longlong)puVar4 + -0x10) = uVar2;
    *(undefined8 *)((longlong)puVar4 + -0x18) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)((longlong)puVar4 + -0x20) = 0x1407e409e;
    FUN_1407e1238(param_1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

