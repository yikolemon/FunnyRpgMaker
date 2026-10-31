/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233670 */

ushort __thiscall FUN_10233670(undefined4 param_1,ushort param_2,int param_3)

{
  int iVar1;
  ushort local_8;
  undefined2 uStack_6;
  
  _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),param_2);
  if (param_2 != 0xffff) {
    if ((*(int *)(param_3 + 0xc) != 0) || (0xff < param_2)) {
      iVar1 = FUN_10235240(*(int *)(param_3 + 0xc),0x100,&param_2,1,&local_8,1);
      if (iVar1 == 0) {
        return param_2;
      }
      return local_8;
    }
    if ((ushort)(param_2 - 0x41) < 0x1a) {
      return param_2 + 0x20;
    }
  }
  return param_2;
}

