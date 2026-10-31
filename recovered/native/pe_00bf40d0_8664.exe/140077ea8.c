/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140077ea8 */

undefined8
FUN_140077ea8(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = 6;
  if (param_5 != (uint *)0x0 && param_4 != (undefined4 *)0x0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0xf4);
    if (param_3 != (undefined4 *)0x0) {
      if (*(ushort *)(param_1 + 0xf4) <= param_2) {
        return 0x8e;
      }
      lVar2 = (ulonglong)param_2 * 0x10;
      *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + lVar2);
      *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 8 + lVar2);
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc + lVar2);
    }
    *param_5 = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}

