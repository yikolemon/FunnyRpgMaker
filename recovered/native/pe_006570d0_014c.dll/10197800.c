/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10197800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_10197800(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
            undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
            undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
            undefined4 param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,
            undefined4 param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36,
            undefined4 param_37,undefined4 param_38,undefined4 param_39,undefined4 param_40,
            undefined4 param_41,undefined4 param_42,undefined4 param_43,undefined4 param_44,
            undefined4 param_45,undefined4 param_46,undefined4 param_47,undefined4 param_48,
            undefined4 param_49,undefined4 param_50,undefined4 param_51,undefined4 param_52,
            undefined4 param_53,undefined4 param_54,undefined4 param_55,undefined4 param_56,
            undefined4 param_57,undefined4 param_58,undefined4 param_59,undefined4 param_60,
            undefined4 param_61,undefined4 param_62,undefined4 param_63,undefined4 param_64,
            undefined4 param_65,undefined4 param_66,undefined4 param_67,undefined4 param_68,
            undefined4 param_69,undefined4 param_70,undefined4 param_71,undefined4 param_72,
            undefined4 param_73,undefined4 param_74,undefined4 param_75,undefined4 param_76,
            undefined4 param_77,undefined4 param_78,undefined4 param_79,undefined4 param_80,
            undefined4 param_81,undefined4 param_82,undefined4 param_83,undefined4 param_84,
            ulonglong param_85)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 local_80 [12];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_20 = param_85;
  local_30 = param_81;
  uStack_2c = param_82;
  uStack_28 = param_83;
  uStack_24 = param_84;
  local_40 = param_77;
  uStack_3c = param_78;
  uStack_38 = param_79;
  uStack_34 = param_80;
  local_50 = param_73;
  uStack_4c = param_74;
  uStack_48 = param_75;
  uStack_44 = param_76;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[8] = param_10;
  *(undefined1 *)(param_1 + 9) = param_12;
  *(undefined8 *)(param_1 + 10) = param_11;
  param_1[0x14] = param_21;
  param_1[0x15] = param_22;
  param_1[0x16] = param_23;
  param_1[0x17] = param_24;
  param_1[0x10] = param_17;
  param_1[0x11] = param_18;
  param_1[0x12] = param_19;
  param_1[0x13] = param_20;
  param_1[0xc] = param_13;
  param_1[0xd] = param_14;
  param_1[0xe] = param_15;
  param_1[0xf] = param_16;
  param_1[0x20] = param_33;
  param_1[0x21] = param_34;
  param_1[0x22] = param_35;
  param_1[0x23] = param_36;
  param_1[0x1c] = param_29;
  param_1[0x1d] = param_30;
  param_1[0x1e] = param_31;
  param_1[0x1f] = param_32;
  param_1[0x18] = param_25;
  param_1[0x19] = param_26;
  param_1[0x1a] = param_27;
  param_1[0x1b] = param_28;
  param_1[0x2c] = param_45;
  param_1[0x2d] = param_46;
  param_1[0x2e] = param_47;
  param_1[0x2f] = param_48;
  param_1[0x28] = param_41;
  param_1[0x29] = param_42;
  param_1[0x2a] = param_43;
  param_1[0x2b] = param_44;
  param_1[0x24] = param_37;
  param_1[0x25] = param_38;
  param_1[0x26] = param_39;
  param_1[0x27] = param_40;
  param_1[0x38] = param_57;
  param_1[0x39] = param_58;
  param_1[0x3a] = param_59;
  param_1[0x3b] = param_60;
  param_1[0x34] = param_53;
  param_1[0x35] = param_54;
  param_1[0x36] = param_55;
  param_1[0x37] = param_56;
  param_1[0x30] = param_49;
  param_1[0x31] = param_50;
  param_1[0x32] = param_51;
  param_1[0x33] = param_52;
  param_1[0x44] = param_69;
  param_1[0x45] = param_70;
  param_1[0x46] = param_71;
  param_1[0x47] = param_72;
  param_1[0x40] = param_65;
  param_1[0x41] = param_66;
  param_1[0x42] = param_67;
  param_1[0x43] = param_68;
  param_1[0x3c] = param_61;
  param_1[0x3d] = param_62;
  param_1[0x3e] = param_63;
  param_1[0x3f] = param_64;
  FUN_101c93a8(_DAT_10301b90,_UNK_10301b94,_UNK_10301b98,_UNK_10301b9c);
  puVar8 = local_80;
  if ((local_20 & 1) != 0) {
    puVar8 = &local_50;
  }
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  uVar4 = puVar8[4];
  uVar5 = puVar8[5];
  uVar6 = puVar8[6];
  uVar7 = puVar8[7];
  param_1[0x48] = *puVar8;
  param_1[0x49] = uVar1;
  param_1[0x4a] = uVar2;
  param_1[0x4b] = uVar3;
  param_1[0x4c] = uVar4;
  param_1[0x4d] = uVar5;
  param_1[0x4e] = uVar6;
  param_1[0x4f] = uVar7;
  uVar1 = puVar8[9];
  uVar2 = puVar8[10];
  uVar3 = puVar8[0xb];
  param_1[0x50] = puVar8[8];
  param_1[0x51] = uVar1;
  param_1[0x52] = uVar2;
  param_1[0x53] = uVar3;
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

