/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400873a0 */

void FUN_1400873a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = (longlong)std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if ((param_1[0x10] != 0) && (*(longlong **)param_1[3] == param_1 + 0xe)) {
    lVar1 = param_1[0x12];
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = (int)(lVar1 - lVar2 >> 1);
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    if (param_1[0x10] != 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar1 = param_1[0x12];
        lVar2 = param_1[0x11];
        *(longlong *)param_1[3] = lVar2;
        *(longlong *)param_1[7] = lVar2;
        *(int *)param_1[10] = (int)(lVar1 - lVar2 >> 1);
      }
      FUN_1400881d0(param_1);
      FUN_140097a30((int *)param_1[0x10]);
    }
    *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    param_1[3] = (longlong)(param_1 + 1);
    param_1[4] = (longlong)(param_1 + 2);
    param_1[7] = (longlong)(param_1 + 5);
    param_1[8] = (longlong)(param_1 + 6);
    param_1[10] = (longlong)(param_1 + 9);
    param_1[0xb] = (longlong)param_1 + 0x4c;
    param_1[2] = 0;
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined8 *)param_1[3] = 0;
    *(undefined8 *)param_1[7] = 0;
    *(undefined4 *)param_1[10] = 0;
    param_1[0x10] = 0;
    *(undefined8 *)((longlong)param_1 + 0x74) = DAT_14013cca0;
    param_1[0xd] = 0;
  }
  FUN_140007418(param_1);
  return;
}

