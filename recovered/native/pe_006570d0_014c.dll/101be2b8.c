/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101be2b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101be2b8(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&piStack_60;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0x1c;
  local_58 = _DAT_10302c30;
  uStack_54 = _UNK_10302c34;
  uStack_50 = _UNK_10302c38;
  uStack_4c = _UNK_10302c3c;
  local_20 = 2;
  local_2c = param_1;
  local_3c = _DAT_10302c40;
  uStack_38 = _UNK_10302c44;
  uStack_34 = _UNK_10302c48;
  uStack_30 = _UNK_10302c4c;
  local_28 = 1;
  local_24 = 0;
  local_18 = 0xa000;
  local_1c = 0xb000;
  iVar2 = D3D11CreateDeviceAndSwapChain
                    ((undefined4)DAT_10302c50,DAT_10302c50._4_4_,0,0,&local_1c,2,7,&local_58,
                     &DAT_103a4d2c,&DAT_103a4d24,local_5c,&DAT_103a4d28);
  if (iVar2 == -0x7785fffc) {
    iVar2 = D3D11CreateDeviceAndSwapChain
                      ((undefined4)DAT_10302c60,DAT_10302c60._4_4_,0,0,&local_1c,2,7,&local_58,
                       &DAT_103a4d2c,&DAT_103a4d24,local_5c,&DAT_103a4d28);
  }
  piVar1 = DAT_103a4d2c;
  if (iVar2 == 0) {
    uVar3 = FUN_10018d26(&piStack_60);
    iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,&DAT_10302c70,uVar3);
    if (-1 < iVar4) {
      (**(code **)(*piStack_60 + 0x20))(piStack_60,param_1,2);
      (**(code **)(*piStack_60 + 8))(piStack_60);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&piStack_60)) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

