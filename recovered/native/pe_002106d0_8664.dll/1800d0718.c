/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0718 */

undefined4 * FUN_1800d0718(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804025b8);
  *(undefined1 *)(param_1 + 1) = 0;
  puVar2 = DAT_180417df0;
  local_38 = (undefined8 *)*DAT_180417df0;
  while (puVar3 = local_38, local_38 != puVar2) {
    cVar4 = FUN_1800d0868(*(undefined4 *)(local_38 + 5));
    if ((cVar4 != '\0') && (0 < (longlong)puVar3[7])) {
      uVar1 = *(undefined4 *)((longlong)puVar3 + 0x2c);
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
    }
    FUN_180016c4c(&local_38);
  }
  FUN_18023d6e0(&DAT_1804025b8);
  return param_1;
}

