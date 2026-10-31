/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fdbf2 */

void FUN_100fdbf2(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_100fd57d(param_3,param_4);
  iVar1 = DAT_1039d74c;
  if (iVar2 != param_3) {
    FUN_100fd943(*(undefined4 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x2e8),param_1,param_2,param_3,
                 iVar2,param_5,param_6,param_7);
    if (*(char *)(iVar1 + 0x2748) == '\x01') {
      FUN_100fd6a8(param_1,param_3,iVar2);
    }
  }
  return;
}

