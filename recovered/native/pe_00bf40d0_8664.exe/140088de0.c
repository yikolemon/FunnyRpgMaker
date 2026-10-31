/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088de0 */

ushort FUN_140088de0(WCHAR param_1,longlong param_2)

{
  int iVar1;
  WCHAR local_res8 [8];
  WCHAR local_res18 [8];
  
  if (param_1 != L'\xffff') {
    if ((*(LPCWSTR *)(param_2 + 0x18) == (LPCWSTR)0x0) && ((ushort)param_1 < 0x100)) {
      if ((ushort)(param_1 + L'ﾟ') < 0x1a) {
        return param_1 + L'￠';
      }
    }
    else {
      local_res8[0] = param_1;
      local_res18[0] = param_1;
      iVar1 = FUN_14008bf70(*(LPCWSTR *)(param_2 + 0x18),0x200,(undefined1 (*) [32])local_res8,1,
                            local_res18,1);
      param_1 = local_res8[0];
      if (iVar1 != 0) {
        param_1 = local_res18[0];
      }
    }
  }
  return param_1;
}

