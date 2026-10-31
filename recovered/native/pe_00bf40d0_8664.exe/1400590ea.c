/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400590ea */

void FUN_1400590ea(longlong param_1,longlong *param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x38);
  uVar5 = FUN_14009bf40(*(longlong *)(*(longlong *)(*param_2 + 0x250) + (param_3 & 0xffffffff) * 8),
                        (longlong *)0x0,10,param_4);
  FUN_14005aaa0(*(longlong *)(param_1 + 0xf8));
  iVar6 = (**(code **)(lVar1 + 0x78))(*(undefined8 *)(param_1 + 0xf8),param_2[8],uVar5,param_4 | 8);
  if (iVar6 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0x60);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0xb8);
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    uVar3 = *(undefined8 *)(lVar1 + 0xa0);
    uVar4 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x88);
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    uVar4 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar1 + 0x94);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar1 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar1 + 0xd8);
  }
  return;
}

