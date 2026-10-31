/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008a029 */

void FUN_14008a029(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  uVar2 = FUN_140080066(*(undefined8 *)(lVar1 + 0x1608),param_1,0);
  FUN_14008a084(param_1,uVar2,param_2,param_3,param_4);
  return;
}

