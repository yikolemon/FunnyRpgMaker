/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d6540 */

undefined8 * FUN_1400d6540(undefined8 *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 local_58 [48];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = std::numpunct<char>::vftable;
  puVar2 = (undefined8 *)FUN_1401174fc();
  FUN_1400da4c0(local_58);
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar7 = &DAT_1401728de;
  if (param_4 == '\0') {
    puVar7 = (undefined1 *)puVar2[2];
  }
  lVar4 = -1;
  do {
    lVar3 = lVar4;
    lVar4 = lVar3 + 1;
  } while (puVar7[lVar4] != '\0');
  lVar3 = lVar3 + 2;
  lVar4 = _calloc_base(lVar3,1);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d9cb0();
  }
  if (lVar3 != 0) {
    FUN_140135ff0(lVar4,puVar7,lVar3);
  }
  param_1[2] = lVar4;
  pcVar5 = (char *)_calloc_base(6,1);
  if (pcVar5 != (char *)0x0) {
    *(undefined4 *)pcVar5 = s_false_140174570._0_4_;
    *(undefined2 *)(pcVar5 + 4) = s_false_140174570._4_2_;
    param_1[4] = pcVar5;
    puVar6 = (undefined4 *)_calloc_base(5,1);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = DAT_140174564;
      *(undefined1 *)(puVar6 + 1) = DAT_140174568;
      param_1[5] = puVar6;
      if (param_4 == '\0') {
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)*puVar2;
        uVar1 = *(undefined1 *)puVar2[1];
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x2e;
        uVar1 = 0x2c;
      }
      *(undefined1 *)((longlong)param_1 + 0x19) = uVar1;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d9cb0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9cb0();
}

