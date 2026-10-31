/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121cbb */

void FUN_180121cbb(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((*(byte *)(DAT_180419160 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockBuilderDockWindow \'%s\' to node 0x%08X\n",param_1,param_2);
  }
  uVar2 = FUN_1800fed39(param_1,0,0);
  lVar3 = FUN_1801118dd(uVar2);
  if (lVar3 == 0) {
    lVar3 = FUN_18011db05(uVar2);
    if (lVar3 == 0) {
      lVar3 = FUN_18011d9dc(param_1);
    }
    if (*(int *)(lVar3 + 0x14) != param_2) {
      *(undefined2 *)(lVar3 + 0x1c) = 0xffff;
    }
    *(int *)(lVar3 + 0x14) = param_2;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x4d0);
    FUN_1801125be(lVar3,param_2,1);
    if (*(int *)(lVar3 + 0x4d0) != iVar1) {
      *(undefined2 *)(lVar3 + 0x496) = 0xffff;
    }
  }
  return;
}

