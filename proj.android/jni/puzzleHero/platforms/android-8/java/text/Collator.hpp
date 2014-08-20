/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.Collator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_COLLATOR_HPP_DECL
#define J2CPP_JAVA_TEXT_COLLATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace text { class CollationKey; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/CollationKey.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace text {

	class Collator;
	class Collator
		: public object<Collator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit Collator(jobject jobj)
		: object<Collator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::util::Comparator>() const;


		local_ref< java::lang::Object > clone();
		jint compare(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		jint compare(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jboolean equals(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< array< local_ref< java::util::Locale >, 1> > getAvailableLocales();
		local_ref< java::text::CollationKey > getCollationKey(local_ref< java::lang::String >  const&);
		jint getDecomposition();
		static local_ref< java::text::Collator > getInstance();
		static local_ref< java::text::Collator > getInstance(local_ref< java::util::Locale >  const&);
		jint getStrength();
		jint hashCode();
		void setDecomposition(jint);
		void setStrength(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NO_DECOMPOSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > CANONICAL_DECOMPOSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > FULL_DECOMPOSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > PRIMARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > SECONDARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > TERTIARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > IDENTICAL;
	}; //class Collator

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_COLLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_COLLATOR_HPP_IMPL
#define J2CPP_JAVA_TEXT_COLLATOR_HPP_IMPL

namespace j2cpp {



java::text::Collator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::Collator::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::text::Collator::operator local_ref<java::util::Comparator>() const
{
	return local_ref<java::util::Comparator>(get_jobject());
}


local_ref< java::lang::Object > java::text::Collator::clone()
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(1),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jint java::text::Collator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(2),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0, a1);
}

jint java::text::Collator::compare(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(3),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0, a1);
}

jboolean java::text::Collator::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(4),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::text::Collator::equals(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(5),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< array< local_ref< java::util::Locale >, 1> > java::text::Collator::getAvailableLocales()
{
	return call_static_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(6),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< java::util::Locale >, 1> >
	>();
}

local_ref< java::text::CollationKey > java::text::Collator::getCollationKey(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(7),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::text::CollationKey >
	>(get_jobject(), a0);
}

jint java::text::Collator::getDecomposition()
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(8),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

local_ref< java::text::Collator > java::text::Collator::getInstance()
{
	return call_static_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(9),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::text::Collator >
	>();
}

local_ref< java::text::Collator > java::text::Collator::getInstance(local_ref< java::util::Locale > const &a0)
{
	return call_static_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(10),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::text::Collator >
	>(a0);
}

jint java::text::Collator::getStrength()
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(11),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jint java::text::Collator::hashCode()
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(12),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

void java::text::Collator::setDecomposition(jint a0)
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(13),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void java::text::Collator::setStrength(jint a0)
{
	return call_method<
		java::text::Collator::J2CPP_CLASS_NAME,
		java::text::Collator::J2CPP_METHOD_NAME(14),
		java::text::Collator::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}


static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(0),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::text::Collator::NO_DECOMPOSITION;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(1),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::text::Collator::CANONICAL_DECOMPOSITION;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(2),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::text::Collator::FULL_DECOMPOSITION;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(3),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(3),
	jint
> java::text::Collator::PRIMARY;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(4),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(4),
	jint
> java::text::Collator::SECONDARY;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(5),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(5),
	jint
> java::text::Collator::TERTIARY;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(6),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(6),
	jint
> java::text::Collator::IDENTICAL;


J2CPP_DEFINE_CLASS(java::text::Collator,"java/text/Collator")
J2CPP_DEFINE_METHOD(java::text::Collator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::Collator,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::Collator,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::text::Collator,3,"compare","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::text::Collator,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::Collator,5,"equals","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::text::Collator,6,"getAvailableLocales","()[java.util.Locale")
J2CPP_DEFINE_METHOD(java::text::Collator,7,"getCollationKey","(Ljava/lang/String;)Ljava/text/CollationKey;")
J2CPP_DEFINE_METHOD(java::text::Collator,8,"getDecomposition","()I")
J2CPP_DEFINE_METHOD(java::text::Collator,9,"getInstance","()Ljava/text/Collator;")
J2CPP_DEFINE_METHOD(java::text::Collator,10,"getInstance","(Ljava/util/Locale;)Ljava/text/Collator;")
J2CPP_DEFINE_METHOD(java::text::Collator,11,"getStrength","()I")
J2CPP_DEFINE_METHOD(java::text::Collator,12,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::Collator,13,"setDecomposition","(I)V")
J2CPP_DEFINE_METHOD(java::text::Collator,14,"setStrength","(I)V")
J2CPP_DEFINE_FIELD(java::text::Collator,0,"NO_DECOMPOSITION","I")
J2CPP_DEFINE_FIELD(java::text::Collator,1,"CANONICAL_DECOMPOSITION","I")
J2CPP_DEFINE_FIELD(java::text::Collator,2,"FULL_DECOMPOSITION","I")
J2CPP_DEFINE_FIELD(java::text::Collator,3,"PRIMARY","I")
J2CPP_DEFINE_FIELD(java::text::Collator,4,"SECONDARY","I")
J2CPP_DEFINE_FIELD(java::text::Collator,5,"TERTIARY","I")
J2CPP_DEFINE_FIELD(java::text::Collator,6,"IDENTICAL","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_COLLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION