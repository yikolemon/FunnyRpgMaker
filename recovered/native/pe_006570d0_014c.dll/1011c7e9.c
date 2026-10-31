/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c7e9 */

void FUN_1011c7e9(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(byte *)(DAT_1039d74c + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockBuilderDockWindow \'%s\' to node 0x%08X\n",param_1,param_2);
  }
  uVar2 = FUN_100fa6c3(param_1,0,0);
  iVar3 = FUN_1010cbc5(uVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_10118aeb(uVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_101189de(param_1);
    }
    if (*(int *)(iVar3 + 0x14) != param_2) {
      *(undefined2 *)(iVar3 + 0x1c) = 0xffff;
    }
    *(int *)(iVar3 + 0x14) = param_2;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x438);
    FUN_1010d956(iVar3,param_2,1);
    if (*(int *)(iVar3 + 0x438) != iVar1) {
      *(undefined2 *)(iVar3 + 0x40a) = 0xffff;
    }
  }
  return;
}

