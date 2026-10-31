/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101180df */

void FUN_101180df(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1039d74c;
  uVar2 = FUN_100fcb39(0x39,0x3f800000);
  FUN_1018b85a(param_2,param_2 + 8,uVar2,param_3,0);
  uVar2 = *(undefined4 *)(iVar1 + 0xda0);
  uVar3 = FUN_100fcb39(0x38,0x3f800000);
  FUN_1018b762(param_2,param_2 + 8,uVar3,param_3,uVar2,0);
  return;
}

