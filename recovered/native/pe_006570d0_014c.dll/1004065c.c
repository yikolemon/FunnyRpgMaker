/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004065c */

void __thiscall FUN_1004065c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [4];
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  uint auStack_20 [2];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_1001909c(&DAT_1033e9f6,&DAT_1033e9fc);
  }
  else {
    uVar2 = FUN_1003ca66(param_2,param_3);
    if ((int)uVar2 < 0) {
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
      if ((uint)param_4[2] < uVar5) {
        (*(code *)param_4[3])(param_4,uVar5);
        iVar3 = param_4[1];
        uVar5 = iVar3 + 1;
      }
      uVar2 = -uVar2;
      param_4[1] = uVar5;
      *(undefined1 *)(*param_4 + iVar3) = 0x2d;
    }
    else {
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
      if ((uint)param_4[2] < uVar5) {
        (*(code *)param_4[3])(param_4,uVar5);
        iVar3 = param_4[1];
        uVar5 = iVar3 + 1;
      }
      param_4[1] = uVar5;
      *(undefined1 *)(*param_4 + iVar3) = 0x2b;
    }
    uVar5 = uVar2 / 0x3c;
    if (uVar2 < 6000) {
      bVar1 = (byte)((uVar5 * 0xcd & 0xffff) >> 0xb);
      iVar3 = param_4[1];
      uVar4 = iVar3 + 1;
      if ((uint)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4,uVar4);
        iVar3 = param_4[1];
        uVar4 = iVar3 + 1;
      }
      param_4[1] = uVar4;
      *(byte *)(*param_4 + iVar3) = bVar1 | 0x30;
      iVar3 = param_4[1];
      uVar4 = iVar3 + 1;
      if ((uint)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4,uVar4);
        iVar3 = param_4[1];
        uVar4 = iVar3 + 1;
      }
      param_4[1] = uVar4;
      *(byte *)(*param_4 + iVar3) = (char)uVar5 + bVar1 * -10 | 0x30;
    }
    else {
      piStack_34 = param_4;
      puStack_28 = auStack_20;
      uStack_2c = 0;
      uStack_30 = 1;
      auStack_20[0] = uVar5;
      FUN_1002479c(auStack_38,&piStack_34,"{:02}",5,1,0,puStack_28,uStack_24);
    }
    iVar3 = param_4[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4,uVar5);
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
    }
    param_4[1] = uVar5;
    *(undefined1 *)(*param_4 + iVar3) = 0x3a;
    bVar1 = (byte)((uVar2 % 0x3c) / 10);
    iVar3 = param_4[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4,uVar5);
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + iVar3) = bVar1 | 0x30;
    iVar3 = param_4[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4,uVar5);
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + iVar3) = (char)(uVar2 % 0x3c) + bVar1 * -10 | 0x30;
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

