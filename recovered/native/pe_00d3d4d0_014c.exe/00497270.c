/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497270 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00497270(int *param_1,ushort *param_2,LCTYPE param_3,LPSTR param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  LPSTR pCVar4;
  void *this;
  void *this_00;
  LPWSTR pWVar5;
  int local_1c;
  int local_18;
  char local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_0048847b(&local_1c,param_1);
  local_c = *(uint *)(local_18 + 8);
  iVar1 = ___acrt_GetLocaleInfoEx_16(this,param_2,param_3,(LPWSTR)0x0,0);
  if (iVar1 == 0) goto LAB_0049732c;
  this_00 = (void *)(iVar1 * 2 + 8);
  pvVar2 = (void *)(-(uint)((void *)(iVar1 * 2) < this_00) & (uint)this_00);
  if (pvVar2 == (void *)0x0) {
    pWVar5 = (LPWSTR)0x0;
  }
  else if (pvVar2 < (void *)0x401) {
    puVar3 = (undefined4 *)&stack0xffffffd8;
    pWVar5 = (LPWSTR)&stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
LAB_004972e9:
      pWVar5 = (LPWSTR)(puVar3 + 2);
      if ((pWVar5 != (LPWSTR)0x0) &&
         (iVar1 = ___acrt_GetLocaleInfoEx_16(this_00,param_2,param_3,pWVar5,iVar1), iVar1 != 0)) {
        pCVar4 = (LPSTR)0x0;
        if (param_5 != 0) {
          pCVar4 = param_4;
        }
        FUN_00496063(local_c,0,pWVar5,-1,pCVar4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
  }
  else {
    this_00 = pvVar2;
    puVar3 = FUN_00495f50((SIZE_T)pvVar2);
    pWVar5 = (LPWSTR)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0xdddd;
      goto LAB_004972e9;
    }
  }
  FUN_00484420((int)pWVar5);
LAB_0049732c:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

