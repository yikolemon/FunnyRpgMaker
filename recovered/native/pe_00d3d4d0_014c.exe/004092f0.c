/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004092f0 */

undefined4 __cdecl FUN_004092f0(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int local_5c [13];
  undefined4 *local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_00418130;
  local_1c = ExceptionList;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_1c;
    local_28 = (undefined4 *)FUN_0047f230(8);
    local_14 = 0;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)(iVar1 + 0x1c);
      if (*(char **)(iVar1 + 0x18) != (char *)0x0) {
        pcVar2 = *(char **)(iVar1 + 0x18);
      }
    }
    local_21 = 1;
    FUN_00405592(local_5c,pcVar2);
    local_14 = 0xffffffff;
    local_28[1] = 0;
    *local_28 = std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                ::vftable;
    *param_1 = (int)local_28;
    local_22 = 0;
    FUN_004057fe(local_5c);
  }
  ExceptionList = local_1c;
  return 4;
}

