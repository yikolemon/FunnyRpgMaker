/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ae170 */

undefined8 * FUN_1400ae170(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_68 [32];
  undefined8 local_48;
  
  lVar1 = DAT_1401cc9b8;
  lVar5 = DAT_1401cc9b0;
  lVar4 = DAT_1401cc9a0;
  local_48 = 0xfffffffffffffffe;
  if (DAT_1401cc9b0 == DAT_1401cc9b8) {
    if (DAT_1401cc998 != DAT_1401cc9a0) {
      lVar1 = DAT_1401cc980;
      lVar2 = DAT_1401cc988;
      lVar5 = DAT_1401cc9b8;
      lVar6 = DAT_1401cc998;
      do {
        for (; lVar3 = DAT_1401cc988, DAT_1401cc9b8 = lVar5, lVar1 != DAT_1401cc988;
            lVar1 = lVar1 + 0x20) {
          DAT_1401cc988 = lVar2;
          FUN_1400843c8(local_68,lVar6,lVar1);
          FUN_1400436a6(&DAT_1401cc9b0,local_68);
          FUN_140005242(local_68);
          lVar2 = DAT_1401cc988;
          lVar5 = DAT_1401cc9b8;
          DAT_1401cc988 = lVar3;
        }
        lVar6 = lVar6 + 0x20;
        DAT_1401cc988 = lVar2;
        lVar1 = DAT_1401cc980;
      } while (lVar6 != lVar4);
    }
    lVar5 = lVar5 - DAT_1401cc9b0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1400411ce(param_1,lVar5 >> 5,&DAT_1401cc9b0,&DAT_1401cc9b8);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1400411ce(param_1,lVar1 - lVar5 >> 5,&DAT_1401cc9b0,&DAT_1401cc9b8);
  }
  return param_1;
}

