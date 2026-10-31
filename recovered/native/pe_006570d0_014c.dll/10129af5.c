/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129af5 */

void __fastcall FUN_10129af5(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float in_XMM0_Da;
  float fVar7;
  
  iVar5 = DAT_1039d74c;
  if (param_4 == 0 || param_5 == 0) {
    iVar4 = FUN_1011b94c();
    *(int *)(iVar4 + 0x18) = param_2;
    iVar3 = iVar4;
    if ((param_5 == 0 || param_4 != 0) && (param_5 = FUN_1011b94c(), param_4 != 0)) {
      iVar3 = param_5;
    }
  }
  else {
    *(int *)(param_5 + 0x18) = param_2;
    iVar3 = FUN_1011b94c();
    iVar4 = param_5;
    param_5 = iVar3;
  }
  *(int *)(param_5 + 0x18) = param_2;
  FUN_10129cd6();
  *(int *)(param_2 + 0x1c) = iVar4;
  *(int *)(param_2 + 0x20) = param_5;
  *(undefined4 *)(*(int *)(param_2 + 0x1c + param_4 * 4) + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(int *)(param_2 + 0x4c) = param_3;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) & 0xffffffc0 | 9;
  fVar7 = *(float *)(iVar5 + 0xce8 + param_3 * 4);
  fVar6 = (float10)FUN_100fdbca(*(float *)(param_2 + 0x3c + param_3 * 4) - *(float *)(iVar5 + 0xdec)
                                ,fVar7 + fVar7);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_5 + 0x48) = uVar2;
  *(undefined4 *)(param_5 + 0x44) = uVar1;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  *(undefined4 *)(iVar4 + 0x44) = uVar1;
  fVar7 = (float)(int)(in_XMM0_Da * (float)fVar6);
  *(float *)(iVar4 + 0x44 + param_3 * 4) = fVar7;
  *(float *)(param_5 + 0x44 + param_3 * 4) = (float)(int)((float)fVar6 - fVar7);
  FUN_1011b9ab();
  FUN_1011ba73();
  iVar5 = param_2;
  do {
    iVar5 = *(int *)(iVar5 + 0x18);
  } while (iVar5 != 0);
  FUN_10129d0e();
  FUN_10129d4e(*(undefined4 *)(param_2 + 0x40));
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar4 + 4) = uVar1;
  *(undefined4 *)(param_5 + 4) = uVar1;
  *(uint *)(iVar3 + 8) = *(uint *)(param_2 + 8) & 0x3f870;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffc078f;
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 8) | *(uint *)(iVar4 + 4) | *(uint *)(iVar4 + 0xc);
  *(uint *)(param_5 + 0x10) =
       *(uint *)(param_5 + 8) | *(uint *)(param_5 + 4) | *(uint *)(param_5 + 0xc);
  *(uint *)(param_2 + 0x10) =
       *(uint *)(param_2 + 8) | *(uint *)(param_2 + 4) | *(uint *)(param_2 + 0xc);
  if ((*(byte *)(iVar3 + 0x11) & 8) != 0) {
    do {
      iVar5 = param_2;
      param_2 = *(int *)(iVar5 + 0x18);
    } while (param_2 != 0);
    *(int *)(iVar5 + 0x80) = iVar3;
  }
  return;
}

