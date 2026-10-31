/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044839c */

int __fastcall FUN_0044839c(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uStack_24;
  uint uStack_20;
  ushort uStack_1a;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_24;
  (*(code *)**(undefined4 **)(param_4 + 4))(param_1,0,0,param_3);
  param_1[0x12] = (int)param_2;
  piVar1 = param_1 + 0x13;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((int)param_1 + 0x5b) = 0;
  iStack_18 = FUN_00448d85(param_2,(uint *)"%!PS-AdobeFont",0xe);
  if (iStack_18 == 0) {
LAB_0044840e:
    iStack_18 = FUN_00420696((int)param_2,0);
    if (iStack_18 == 0) {
      iStack_18 = FUN_00448e31(param_2,&uStack_1a,&uStack_20);
      if (iStack_18 == 0) {
        if (uStack_1a == 0x8001) {
          *(undefined1 *)(param_1 + 0x17) = 1;
        }
        else {
          iStack_18 = FUN_00420696((int)param_2,0);
          if (iStack_18 != 0) goto LAB_0044843c;
          uStack_20 = param_2[1];
        }
        if (param_2[5] == 0) {
          param_1[0x13] = *param_2 + param_2[2];
          param_1[0x14] = uStack_20;
          *(undefined1 *)((int)param_1 + 0x5d) = 1;
          iStack_18 = FUN_004206ea((int)param_2,uStack_20);
          if (iStack_18 == 0) {
            uVar4 = param_1[0x14];
LAB_0044851b:
            iVar3 = param_1[0x13];
            param_1[1] = iVar3;
            *param_1 = iVar3;
            param_1[2] = uVar4 + iVar3;
            iVar3 = 0;
            goto LAB_0044845c;
          }
        }
        else {
          uStack_24 = uStack_20;
          puVar2 = (uint *)FUN_0041e773(param_3,uStack_20,&iStack_18);
          uVar4 = uStack_24;
          *piVar1 = (int)puVar2;
          if (iStack_18 == 0) {
            iStack_18 = FUN_004206d1(param_2,puVar2,uStack_24);
            if (iStack_18 == 0) {
              param_1[0x14] = uVar4;
              goto LAB_0044851b;
            }
          }
        }
      }
    }
  }
  else if ((char)iStack_18 == '\x02') {
    iStack_18 = FUN_00448d85(param_2,(uint *)"%!FontType",10);
    if (iStack_18 == 0) goto LAB_0044840e;
  }
LAB_0044843c:
  iVar3 = iStack_18;
  if (*(char *)((int)param_1 + 0x5d) == '\0') {
    FUN_0041c607(param_3,*piVar1);
    *piVar1 = 0;
    iVar3 = iStack_18;
  }
LAB_0044845c:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&uStack_24)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&uStack_24);
}

