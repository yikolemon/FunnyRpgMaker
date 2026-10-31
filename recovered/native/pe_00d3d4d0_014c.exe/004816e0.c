/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004816e0 */

ushort __thiscall FUN_004816e0(void *this,WCHAR param_1,int param_2)

{
  int iVar1;
  WCHAR local_8;
  undefined2 uStack_6;
  
  _local_8 = CONCAT22((short)((uint)this >> 0x10),param_1);
  if (param_1 != L'\xffff') {
    if ((*(LPCWSTR *)(param_2 + 0xc) != (LPCWSTR)0x0) || (0xff < (ushort)param_1)) {
      iVar1 = FUN_00484680(*(LPCWSTR *)(param_2 + 0xc),0x200,&param_1,1,&local_8,1);
      if (iVar1 == 0) {
        return param_1;
      }
      return local_8;
    }
    if ((ushort)(param_1 + L'ﾟ') < 0x1a) {
      return param_1 + L'￠';
    }
  }
  return param_1;
}

