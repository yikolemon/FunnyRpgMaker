/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048b508 */

undefined4 __fastcall FUN_0048b508(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  
  piVar1 = (int *)param_1[4];
  param_1[4] = piVar1 + 1;
  uVar3 = param_1[9];
  pcVar4 = (char *)*piVar1;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0x7fffffff;
  }
  param_1[0xc] = pcVar4;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<char>
                    (CONCAT44(param_1[1],*param_1),*(char *)((int)param_1 + 0x2d),param_1[10]);
  if (bVar2) {
    if ((undefined1 (*) [32])pcVar4 == (undefined1 (*) [32])0x0) {
      param_1[0xc] = L"(null)";
      pcVar4 = (char *)L"(null)";
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar3 = FUN_004941c0((short *)pcVar4,uVar3);
  }
  else {
    if ((undefined1 (*) [32])pcVar4 == (undefined1 (*) [32])0x0) {
      pcVar4 = "(null)";
      param_1[0xc] = "(null)";
    }
    uVar3 = FUN_004943a0((undefined1 (*) [32])pcVar4,uVar3);
  }
  param_1[0xd] = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}

