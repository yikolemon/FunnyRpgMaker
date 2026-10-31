/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497c96 */

int __cdecl FUN_00497c96(UINT param_1,char param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  UINT UVar3;
  int iVar4;
  undefined4 *puVar5;
  __acrt_ptd *p_Var6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *local_24;
  undefined4 **local_20;
  UINT local_1c;
  undefined4 *local_14;
  
  FUN_00497bf6(param_3,param_4);
  local_1c = FUN_00497b22(param_1);
  if (local_1c == *(UINT *)(*(int *)(param_3 + 0x48) + 4)) {
    iVar4 = 0;
  }
  else {
    puVar5 = FUN_00495f50(0x220);
    UVar3 = local_1c;
    local_14 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00495f00((LPVOID)0x0);
      iVar4 = -1;
    }
    else {
      puVar7 = *(undefined4 **)(param_3 + 0x48);
      puVar8 = (undefined4 *)&stack0xfffffdb8;
      for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined4 *)&stack0xfffffdb8;
      puVar8 = puVar5;
      for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      *puVar5 = 0;
      iVar4 = FUN_0049791d(UVar3,(int)puVar5);
      if (iVar4 == -1) {
        p_Var6 = FUN_0048f66d();
        *(undefined4 *)p_Var6 = 0x16;
        FUN_00495f00(local_14);
        iVar4 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_0048d89d();
        }
        piVar2 = *(int **)(param_3 + 0x48);
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (*(undefined **)(param_3 + 0x48) != &DAT_0051b118)) {
          FUN_00495f00(*(LPVOID *)(param_3 + 0x48));
        }
        *local_14 = 1;
        *(undefined4 **)(param_3 + 0x48) = local_14;
        if ((*(uint *)(param_3 + 0x350) & DAT_0051b640) == 0) {
          local_24 = &param_3;
          local_20 = &param_4;
          local_1c = 5;
          local_14 = (undefined4 *)0x5;
          FUN_00498051((int *)&local_14,&local_24);
          if (param_2 != '\0') {
            PTR_DAT_0051af44 = (undefined *)*param_4;
          }
        }
        FUN_00495f00((LPVOID)0x0);
      }
    }
  }
  return iVar4;
}

