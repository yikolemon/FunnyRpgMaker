/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004447c */

undefined8 * FUN_14004447c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar2 = FUN_140022a03(param_3);
  if (cVar2 == '\0') {
    FUN_14000169c(local_68,"Failed parsing ");
    puVar1 = param_3 + 2;
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    puVar3 = (undefined4 *)FUN_14000b1f8(local_68,param_3,*puVar1);
    local_48 = *puVar3;
    uStack_44 = puVar3[1];
    uStack_40 = puVar3[2];
    uStack_3c = puVar3[3];
    local_38 = puVar3[4];
    uStack_34 = puVar3[5];
    uStack_30 = puVar3[6];
    uStack_2c = puVar3[7];
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    *(undefined1 *)puVar3 = 0;
    FUN_14000ed8c(local_88,&local_48," as a ");
    FUN_14000ed8c(param_2,local_88,"FLOAT");
    FUN_1400017de(local_88);
    FUN_1400017de(&local_48);
    FUN_1400017de(local_68);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  return param_2;
}

