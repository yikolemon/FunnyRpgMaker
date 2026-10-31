/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008fe20 */

undefined8 FUN_14008fe20(__uint64 *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  bool bVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 1);
  puVar3 = (ushort *)*puVar2;
  if ((puVar3 == (ushort *)0x0) || (*(__uint64 *)(puVar3 + 4) == 0)) {
    uVar5 = 6;
    param_1[8] = (__uint64)"(null)";
  }
  else {
    param_1[8] = *(__uint64 *)(puVar3 + 4);
    uVar1 = *puVar3;
    uVar5 = (ulonglong)uVar1;
    bVar4 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                       *(length_modifier *)((longlong)param_1 + 0x34));
    if (bVar4) {
      *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_14008fe83;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
LAB_14008fe83:
  *(int *)(param_1 + 9) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}

