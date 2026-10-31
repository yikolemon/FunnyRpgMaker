/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400132d4 */

void FUN_1400132d4(undefined8 *param_1)

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
    FUN_14001575a(param_1);
  }
  FUN_1400146f4(param_1);
  return;
}

