/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009af77 */

void FUN_14009af77(longlong param_1,undefined4 *param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_1400772a6("[docking] DockContextRemoveNode 0x%08X\n",*param_2);
  }
  if (*(longlong *)(param_2 + 0x24) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 0x4c8) = 0;
  }
  lVar1 = *(longlong *)(param_2 + 6);
  if ((param_3 & lVar1 != 0) != 0) {
    puVar5 = *(undefined4 **)(lVar1 + 0x20);
    if (puVar5 == param_2) {
      puVar5 = *(undefined4 **)(lVar1 + 0x28);
    }
    FUN_14009a22a(param_1,lVar1,puVar5);
    return;
  }
  if (lVar1 != 0) {
    lVar4 = 0;
    bVar2 = true;
    do {
      bVar3 = bVar2;
      if (*(undefined4 **)(lVar1 + 0x20 + lVar4 * 8) == param_2) {
        *(undefined8 *)(*(longlong *)(param_2 + 6) + 0x20 + lVar4 * 8) = 0;
      }
      lVar4 = 1;
      bVar2 = false;
    } while (bVar3);
  }
  FUN_140098412(param_1,param_2);
  return;
}

