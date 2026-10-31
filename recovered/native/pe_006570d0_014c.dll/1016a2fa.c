/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016a2fa */

void __fastcall FUN_1016a2fa(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  
  iVar4 = DAT_1039d74c;
  fVar1 = *(float *)(DAT_1039d74c + 0xe4);
  fVar2 = *(float *)(DAT_1039d74c + 0x1540);
  fVar7 = *(float *)(DAT_1039d74c + 0x1238) * DAT_102b8cb0;
  fVar3 = *(float *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x50);
  fVar5 = (float10)FUN_1016905b(param_2 + -1);
  fVar5 = (float10)FUN_100fdbca(((float)(int)fVar7 + (fVar1 - fVar2)) - fVar3,
                                (float)fVar5 + *(float *)(iVar4 + 0xd40));
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    fVar6 = (float10)FUN_1016905b(param_2 + 1);
    FUN_100ea38a((float)fVar5,(float)fVar6 - *(float *)(iVar4 + 0xd40));
  }
  return;
}

