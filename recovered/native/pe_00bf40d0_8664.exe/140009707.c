/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140009707 */

int FUN_140009707(undefined1 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 local_res20;
  undefined1 auStackY_68 [32];
  
  uVar3 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  local_res20 = param_4;
  puVar4 = (ulonglong *)FUN_140009dc3();
  iVar1 = FUN_14008ef2c(*puVar4,param_1,param_2,param_3,(undefined4 *)0x0,&local_res20);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_14012ea80 == (uVar3 ^ (ulonglong)auStackY_68)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(uVar3 ^ (ulonglong)auStackY_68);
}

