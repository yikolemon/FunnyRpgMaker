/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140104670 */

void FUN_140104670(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if ((param_1[0x10] != 0) && (*(undefined8 **)param_1[3] == param_1 + 0xe)) {
    lVar1 = param_1[0x12];
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = (int)(lVar1 - lVar2 >> 1);
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    if (param_1[0x10] != 0) {
      if (*(undefined8 **)param_1[3] == param_1 + 0xe) {
        lVar1 = param_1[0x12];
        lVar2 = param_1[0x11];
        *(longlong *)param_1[3] = lVar2;
        *(longlong *)param_1[7] = lVar2;
        *(int *)param_1[10] = (int)(lVar1 - lVar2 >> 1);
      }
      FUN_1401054a0(param_1);
      FUN_140115998(param_1[0x10]);
    }
    *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    param_1[3] = param_1 + 1;
    param_1[4] = param_1 + 2;
    param_1[7] = param_1 + 5;
    param_1[8] = param_1 + 6;
    param_1[10] = param_1 + 9;
    param_1[0xb] = (undefined4 *)((longlong)param_1 + 0x4c);
    param_1[2] = 0;
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined8 *)param_1[3] = 0;
    *(undefined8 *)param_1[7] = 0;
    *(undefined4 *)param_1[10] = 0;
    param_1[0x10] = 0;
    *(undefined8 *)((longlong)param_1 + 0x74) = DAT_1401d4998;
    param_1[0xd] = 0;
  }
  FUN_14005912e(param_1);
  return;
}

