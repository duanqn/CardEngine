// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: card.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_card_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_card_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_card_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_card_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_card_2eproto;
class JoinRequest;
class JoinRequestDefaultTypeInternal;
extern JoinRequestDefaultTypeInternal _JoinRequest_default_instance_;
class JoinResponse;
class JoinResponseDefaultTypeInternal;
extern JoinResponseDefaultTypeInternal _JoinResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::JoinRequest* Arena::CreateMaybeMessage<::JoinRequest>(Arena*);
template<> ::JoinResponse* Arena::CreateMaybeMessage<::JoinResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class JoinRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:JoinRequest) */ {
 public:
  inline JoinRequest() : JoinRequest(nullptr) {}
  virtual ~JoinRequest();

  JoinRequest(const JoinRequest& from);
  JoinRequest(JoinRequest&& from) noexcept
    : JoinRequest() {
    *this = ::std::move(from);
  }

  inline JoinRequest& operator=(const JoinRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline JoinRequest& operator=(JoinRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const JoinRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JoinRequest* internal_default_instance() {
    return reinterpret_cast<const JoinRequest*>(
               &_JoinRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(JoinRequest& a, JoinRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(JoinRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(JoinRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline JoinRequest* New() const final {
    return CreateMaybeMessage<JoinRequest>(nullptr);
  }

  JoinRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<JoinRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const JoinRequest& from);
  void MergeFrom(const JoinRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(JoinRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "JoinRequest";
  }
  protected:
  explicit JoinRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_card_2eproto);
    return ::descriptor_table_card_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 1,
  };
  // uint32 version = 1;
  void clear_version();
  ::PROTOBUF_NAMESPACE_ID::uint32 version() const;
  void set_version(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_version() const;
  void _internal_set_version(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:JoinRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_card_2eproto;
};
// -------------------------------------------------------------------

class JoinResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:JoinResponse) */ {
 public:
  inline JoinResponse() : JoinResponse(nullptr) {}
  virtual ~JoinResponse();

  JoinResponse(const JoinResponse& from);
  JoinResponse(JoinResponse&& from) noexcept
    : JoinResponse() {
    *this = ::std::move(from);
  }

  inline JoinResponse& operator=(const JoinResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline JoinResponse& operator=(JoinResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const JoinResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JoinResponse* internal_default_instance() {
    return reinterpret_cast<const JoinResponse*>(
               &_JoinResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(JoinResponse& a, JoinResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(JoinResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(JoinResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline JoinResponse* New() const final {
    return CreateMaybeMessage<JoinResponse>(nullptr);
  }

  JoinResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<JoinResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const JoinResponse& from);
  void MergeFrom(const JoinResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(JoinResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "JoinResponse";
  }
  protected:
  explicit JoinResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_card_2eproto);
    return ::descriptor_table_card_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPlayerNameFieldNumber = 2,
    kVersionFieldNumber = 1,
  };
  // string player_name = 2;
  void clear_player_name();
  const std::string& player_name() const;
  void set_player_name(const std::string& value);
  void set_player_name(std::string&& value);
  void set_player_name(const char* value);
  void set_player_name(const char* value, size_t size);
  std::string* mutable_player_name();
  std::string* release_player_name();
  void set_allocated_player_name(std::string* player_name);
  private:
  const std::string& _internal_player_name() const;
  void _internal_set_player_name(const std::string& value);
  std::string* _internal_mutable_player_name();
  public:

  // uint32 version = 1;
  void clear_version();
  ::PROTOBUF_NAMESPACE_ID::uint32 version() const;
  void set_version(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_version() const;
  void _internal_set_version(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:JoinResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr player_name_;
  ::PROTOBUF_NAMESPACE_ID::uint32 version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_card_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// JoinRequest

// uint32 version = 1;
inline void JoinRequest::clear_version() {
  version_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 JoinRequest::_internal_version() const {
  return version_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 JoinRequest::version() const {
  // @@protoc_insertion_point(field_get:JoinRequest.version)
  return _internal_version();
}
inline void JoinRequest::_internal_set_version(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  version_ = value;
}
inline void JoinRequest::set_version(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:JoinRequest.version)
}

// -------------------------------------------------------------------

// JoinResponse

// uint32 version = 1;
inline void JoinResponse::clear_version() {
  version_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 JoinResponse::_internal_version() const {
  return version_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 JoinResponse::version() const {
  // @@protoc_insertion_point(field_get:JoinResponse.version)
  return _internal_version();
}
inline void JoinResponse::_internal_set_version(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  version_ = value;
}
inline void JoinResponse::set_version(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:JoinResponse.version)
}

// string player_name = 2;
inline void JoinResponse::clear_player_name() {
  player_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& JoinResponse::player_name() const {
  // @@protoc_insertion_point(field_get:JoinResponse.player_name)
  return _internal_player_name();
}
inline void JoinResponse::set_player_name(const std::string& value) {
  _internal_set_player_name(value);
  // @@protoc_insertion_point(field_set:JoinResponse.player_name)
}
inline std::string* JoinResponse::mutable_player_name() {
  // @@protoc_insertion_point(field_mutable:JoinResponse.player_name)
  return _internal_mutable_player_name();
}
inline const std::string& JoinResponse::_internal_player_name() const {
  return player_name_.Get();
}
inline void JoinResponse::_internal_set_player_name(const std::string& value) {
  
  player_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void JoinResponse::set_player_name(std::string&& value) {
  
  player_name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:JoinResponse.player_name)
}
inline void JoinResponse::set_player_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  player_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:JoinResponse.player_name)
}
inline void JoinResponse::set_player_name(const char* value,
    size_t size) {
  
  player_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:JoinResponse.player_name)
}
inline std::string* JoinResponse::_internal_mutable_player_name() {
  
  return player_name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* JoinResponse::release_player_name() {
  // @@protoc_insertion_point(field_release:JoinResponse.player_name)
  return player_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void JoinResponse::set_allocated_player_name(std::string* player_name) {
  if (player_name != nullptr) {
    
  } else {
    
  }
  player_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), player_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:JoinResponse.player_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_card_2eproto
