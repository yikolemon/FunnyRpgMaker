/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401664d6 */

undefined8 FUN_1401664d6(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar1 + 8) <
      (uint)*(ushort *)(lVar1 + 0x1a) + param_2 + (uint)*(ushort *)(lVar1 + 0x62)) {
    uVar2 = FUN_140128d2c(lVar1,param_2,0);
    return uVar2;
  }
  return 0;
}

