/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b66ce */

undefined8 *
FUN_1800b66ce(undefined8 *param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 < param_3 && *param_4 != param_4[1]) &&
     (uVar3 = param_4[1] - *param_4 >> 1, uVar3 <= param_3 - param_2)) {
    for (; param_2 <= param_3 - uVar3; param_2 = param_2 + 1) {
      lVar1 = *param_4;
      if (param_4[1] - lVar1 != 0) {
        lVar4 = 0;
        do {
          if ((*(char *)(lVar1 + 1 + lVar4 * 2) == '\0') &&
             (*(char *)(lVar1 + lVar4 * 2) != *(char *)(param_2 + lVar4)))
          goto code_r0x0001800b6787;
          lVar4 = lVar4 + 1;
        } while (param_4[1] - lVar1 >> 1 != lVar4);
      }
      puVar2 = (ulonglong *)param_1[1];
      if (puVar2 == (ulonglong *)param_1[2]) {
        FUN_180052bde(param_1,puVar2);
      }
      else {
        *puVar2 = param_2;
        param_1[1] = param_1[1] + 8;
      }
code_r0x0001800b6787:
    }
  }
  return param_1;
}

