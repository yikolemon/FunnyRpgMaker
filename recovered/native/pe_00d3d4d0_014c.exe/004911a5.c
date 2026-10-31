/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004911a5 */

void FUN_004911a5(WCHAR param_1,FILE *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  FILE *this;
  undefined *puVar4;
  int local_14;
  byte local_10 [8];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if (((uint)param_2->_flag >> 0xc & 1) == 0) {
    iVar1 = __fileno(param_2);
    if ((iVar1 == -1) || (iVar1 = __fileno(param_2), iVar1 == -2)) {
      puVar3 = &DAT_0051b0e0;
    }
    else {
      iVar1 = __fileno(param_2);
      uVar2 = __fileno(param_2);
      puVar3 = (undefined *)((&DAT_00521cc8)[iVar1 >> 6] + (uVar2 & 0x3f) * 0x38);
    }
    puVar4 = &DAT_0051b0e0;
    if ((puVar3[0x29] != '\x02') && (puVar3[0x29] != '\x01')) {
      this = param_2;
      iVar1 = __fileno(param_2);
      if ((iVar1 != -1) && (this = param_2, iVar1 = __fileno(param_2), iVar1 != -2)) {
        iVar1 = __fileno(param_2);
        uVar2 = __fileno(param_2);
        this = (FILE *)((uVar2 & 0x3f) * 0x38);
        puVar4 = (undefined *)((int)&this->_ptr + (&DAT_00521cc8)[iVar1 >> 6]);
      }
      if ((char)puVar4[0x28] < '\0') {
        iVar1 = FUN_004991bb(this,&local_14,local_10,5,param_1,param_3);
        if ((iVar1 == 0) && (iVar1 = 0, 0 < local_14)) {
          do {
            uVar2 = FUN_0049100e(local_10[iVar1],param_2,param_3);
            if (uVar2 == 0xffffffff) break;
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_14);
        }
        goto LAB_004912cf;
      }
    }
    FUN_004912dd(param_1,param_2,param_3);
  }
  else {
    FUN_004912dd(param_1,param_2,param_3);
  }
LAB_004912cf:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

