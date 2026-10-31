/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073e04 */

void FUN_180073e04(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x10] != 0) && (*(undefined8 **)param_1[3] == param_1 + 0xe)) {
    iVar1 = *(int *)(param_1 + 0x12);
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = iVar1 - (int)lVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) == '\x01') {
    FUN_180075ab6(param_1);
  }
  FUN_180074a5a(param_1);
  return;
}

