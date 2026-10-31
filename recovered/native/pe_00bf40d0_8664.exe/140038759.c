/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038759 */

/* WARNING: Removing unreachable block (ram,0x00014003884f) */
/* WARNING: Removing unreachable block (ram,0x000140038867) */
/* WARNING: Removing unreachable block (ram,0x000140038880) */
/* WARNING: Removing unreachable block (ram,0x0001400388af) */
/* WARNING: Removing unreachable block (ram,0x0001400388b9) */
/* WARNING: Removing unreachable block (ram,0x0001400388de) */
/* WARNING: Removing unreachable block (ram,0x0001400388fe) */
/* WARNING: Removing unreachable block (ram,0x000140038907) */
/* WARNING: Removing unreachable block (ram,0x00014003891c) */

void FUN_140038759(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStackY_98 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  local_4c = 0;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x98);
  param_1[5] = 0;
  param_1[7] = 0;
  uVar3 = FUN_14001f594(lVar1,0x47535542,0,0);
  lVar4 = 0;
  if (((int)uVar3 == 0) && (lVar4 = FUN_14001e961(lVar2,0,&local_4c), local_4c == 0)) {
    FUN_14001f594(lVar1,0x47535542,0,lVar4);
  }
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_14001c53d(lVar2,lVar4);
  FUN_14001c53d(lVar2,0);
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
}

