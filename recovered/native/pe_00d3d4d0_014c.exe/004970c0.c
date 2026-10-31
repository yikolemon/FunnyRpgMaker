/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004970c0 */

void FUN_004970c0(int *param_1,int param_2,ushort *param_3,uint param_4,int *param_5)

{
  uint uVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  LPWSTR pWVar4;
  void *this;
  int iVar5;
  ushort *local_8c;
  CHAR local_88 [128];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_8c = param_3;
  *param_5 = 0;
  if (param_2 == 1) {
    uVar1 = FUN_00497270(param_1,param_3,param_4,local_88,0x80);
    if (uVar1 != 0) {
      iVar5 = 1;
      pvVar2 = FUN_00497060(uVar1,1);
      *param_5 = (int)pvVar2;
      FUN_00495f00((LPVOID)0x0);
      if ((*param_5 != 0) &&
         (iVar5 = FUN_004a37e0((char *)*param_5,iVar5,(int)local_88,iVar5 + -1), iVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_00497256;
    }
    DVar3 = GetLastError();
    if ((DVar3 != 0x7a) || (uVar1 = FUN_00497270(param_1,param_3,param_4,(LPSTR)0x0,0), uVar1 == 0))
    goto LAB_00497256;
    iVar5 = 1;
    pWVar4 = FUN_00497060(uVar1,1);
    if (pWVar4 != (LPWSTR)0x0) {
      iVar5 = FUN_00497270((int *)pWVar4,local_8c,param_4,(LPSTR)pWVar4,iVar5);
LAB_004971c5:
      if (iVar5 != 0) {
        *param_5 = (int)pWVar4;
        pWVar4 = (LPWSTR)0x0;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_8c = (ushort *)0x0;
        iVar5 = ___acrt_GetLocaleInfoEx_16(param_1,param_3,param_4 | 0x20000000,(LPWSTR)&local_8c,2)
        ;
        if (iVar5 != 0) {
          *(undefined1 *)param_5 = local_8c._0_1_;
        }
      }
      goto LAB_00497256;
    }
    uVar1 = ___acrt_GetLocaleInfoEx_16(param_1,param_3,param_4,(LPWSTR)0x0,0);
    if (uVar1 == 0) goto LAB_00497256;
    this = (void *)0x2;
    pWVar4 = FUN_00497060(uVar1,2);
    if (pWVar4 != (LPWSTR)0x0) {
      iVar5 = ___acrt_GetLocaleInfoEx_16(this,local_8c,param_4,pWVar4,uVar1);
      goto LAB_004971c5;
    }
  }
  FUN_00495f00(pWVar4);
LAB_00497256:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

